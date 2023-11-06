// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Transform.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_TRANSFORM_H_
#define _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_TRANSFORM_H_

#include "Vector3.h"
#include "Quaternion.h"

#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(Transform_SOURCE)
#define Transform_DllAPI __declspec( dllexport )
#else
#define Transform_DllAPI __declspec( dllimport )
#endif // Transform_SOURCE
#else
#define Transform_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define Transform_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima

namespace geometry_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure Transform defined by the user in the IDL file.
         * @ingroup TRANSFORM
         */
        class Transform
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Transform();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~Transform();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object geometry_msgs::msg::Transform that will be copied.
             */
            eProsima_user_DllExport Transform(
                    const Transform& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object geometry_msgs::msg::Transform that will be copied.
             */
            eProsima_user_DllExport Transform(
                    Transform&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object geometry_msgs::msg::Transform that will be copied.
             */
            eProsima_user_DllExport Transform& operator =(
                    const Transform& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object geometry_msgs::msg::Transform that will be copied.
             */
            eProsima_user_DllExport Transform& operator =(
                    Transform&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::Transform object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const Transform& x) const;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::Transform object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const Transform& x) const;

            /*!
             * @brief This function copies the value in member translation
             * @param _translation New value to be copied in member translation
             */
            eProsima_user_DllExport void translation(
                    const geometry_msgs::msg::Vector3& _translation);

            /*!
             * @brief This function moves the value in member translation
             * @param _translation New value to be moved in member translation
             */
            eProsima_user_DllExport void translation(
                    geometry_msgs::msg::Vector3&& _translation);

            /*!
             * @brief This function returns a constant reference to member translation
             * @return Constant reference to member translation
             */
            eProsima_user_DllExport const geometry_msgs::msg::Vector3& translation() const;

            /*!
             * @brief This function returns a reference to member translation
             * @return Reference to member translation
             */
            eProsima_user_DllExport geometry_msgs::msg::Vector3& translation();
            /*!
             * @brief This function copies the value in member rotation
             * @param _rotation New value to be copied in member rotation
             */
            eProsima_user_DllExport void rotation(
                    const geometry_msgs::msg::Quaternion& _rotation);

            /*!
             * @brief This function moves the value in member rotation
             * @param _rotation New value to be moved in member rotation
             */
            eProsima_user_DllExport void rotation(
                    geometry_msgs::msg::Quaternion&& _rotation);

            /*!
             * @brief This function returns a constant reference to member rotation
             * @return Constant reference to member rotation
             */
            eProsima_user_DllExport const geometry_msgs::msg::Quaternion& rotation() const;

            /*!
             * @brief This function returns a reference to member rotation
             * @return Reference to member rotation
             */
            eProsima_user_DllExport geometry_msgs::msg::Quaternion& rotation();

            /*!
            * @brief This function returns the maximum serialized size of an object
            * depending on the buffer alignment.
            * @param current_alignment Buffer alignment.
            * @return Maximum serialized size.
            */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const geometry_msgs::msg::Transform& data,
                    size_t current_alignment = 0);

            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);

            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;

        private:
            geometry_msgs::msg::Vector3 m_translation;
            geometry_msgs::msg::Quaternion m_rotation;
        };
    } // namespace msg
} // namespace geometry_msgs

#endif // _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_TRANSFORM_H_
