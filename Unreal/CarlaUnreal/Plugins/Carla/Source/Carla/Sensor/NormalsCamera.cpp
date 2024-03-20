// Copyright (c) 2024 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#include "Carla/Sensor/NormalsCamera.h"
#include "Carla.h"
#include "Carla/Sensor/PixelReader.h"
#include "Carla/Actor/ActorBlueprintFunctionLibrary.h"

FActorDefinition ANormalsCamera::GetSensorDefinition()
{
  return UActorBlueprintFunctionLibrary::MakeNormalsCameraDefinition();
}

ANormalsCamera::ANormalsCamera(const FObjectInitializer &ObjectInitializer)
  : Super(ObjectInitializer)
{
  Enable16BitFormat(false);
  AddPostProcessingMaterial(
      TEXT("Material'/Carla/PostProcessingMaterials/PhysicLensDistortion.PhysicLensDistortion'"));
  AddPostProcessingMaterial(
      TEXT("Material'/Carla/PostProcessingMaterials/NormalsEffectMaterial.NormalsEffectMaterial'"));
}

void ANormalsCamera::PostPhysTick(UWorld *World, ELevelTick TickType, float DeltaSeconds)
{
  TRACE_CPUPROFILER_EVENT_SCOPE(ANormalsCamera::PostPhysTick);

#if 0
  ImageUtil::ReadSensorImageDataAsyncFColor(*this, [this](
    TArrayView<const FColor> Pixels,
    FIntPoint Size) -> bool
  {
    SendImageDataToClient(*this, Pixels);
    return true;
  });
#else
  FPixelReader::SendPixelsInRenderThread<ANormalsCamera, FColor>(*this);
#endif
}