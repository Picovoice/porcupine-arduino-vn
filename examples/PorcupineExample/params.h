
/*
    Copyright 2020-2023 Picovoice Inc.

    You may not use this file except in compliance with the license. A copy of the license is located in the "LICENSE"
    file accompanying this source.

    Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
    an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
    specific language governing permissions and limitations under the License.
*/

#ifndef PARAMS_H
#define PARAMS_H

#include <stdint.h>

    // keyword = xin chào máy tính
static const uint8_t KEYWORD_ARRAY[] = {
        0x9e, 0x9b, 0x1e, 0x97, 0x9e, 0x6d, 0x82, 0xbf, 0x64, 0xfc, 0x7d, 0x2c, 0x5f, 0xdb, 0xd5, 0x00, 0xa0, 0x1e,
        0x86, 0x1c, 0x79, 0x3e, 0xf5, 0xb3, 0xce, 0x0b, 0xcc, 0x53, 0xce, 0x26, 0x35, 0x94, 0xbb, 0xdc, 0xf3, 0xa9,
        0x1c, 0x43, 0x70, 0xc9, 0xd9, 0xc3, 0xe3, 0x6d, 0xdd, 0x7c, 0x60, 0xb1, 0x64, 0x08, 0x41, 0x4f, 0x72, 0x70,
        0x29, 0x2b, 0xc2, 0x8e, 0x85, 0x7d, 0xae, 0x17, 0x55, 0x4d, 0x22, 0x56, 0x2b, 0x0c, 0xdf, 0x18, 0xf7, 0xfa,
        0x4c, 0x54, 0x6a, 0x03, 0xf8, 0x2c, 0xd4, 0x9e, 0x88, 0xd8, 0x31, 0xb9, 0xa0, 0x09, 0xdb, 0x5a, 0xae, 0xbd,
        0xc3, 0x04, 0x59, 0x49, 0x16, 0x1c, 0xaa, 0xda, 0xcd, 0x2a, 0xb3, 0x6f, 0xd2, 0x92, 0xb5, 0x86, 0x05, 0x57,
        0xfb, 0xc9, 0x8a, 0x72, 0x82, 0x05, 0xd4, 0xda, 0x58, 0xf0, 0x2e, 0xac, 0xbc, 0xd6, 0x81, 0xfc, 0x67, 0xfb,
        0x49, 0xcc, 0x0a, 0xed, 0xbf, 0xe9, 0x28, 0xa7, 0x65, 0xab, 0x73, 0x19, 0xbe, 0x22, 0xe7, 0xac, 0xb9, 0x48,
        0xad, 0x0b, 0x3d, 0xb2, 0xf9, 0x5a, 0x9c, 0x67, 0x4e, 0x08, 0x7d, 0x9c, 0x97, 0xab, 0x52, 0xee, 0x13, 0x16,
        0xe2, 0x7c, 0x0c, 0xa6, 0xee, 0xea, 0xbc, 0xe4, 0xe3, 0xcb, 0x82, 0x96, 0xa6, 0x74, 0xaa, 0xb3, 0xe2, 0xca,
        0xa3, 0xf7, 0x0a, 0xac, 0x13, 0xbd, 0xd6, 0x9f, 0x6c, 0xf3, 0xbc, 0x9a, 0x73, 0xa5, 0xaa, 0x84, 0x16, 0x03,
        0x41, 0x64, 0xd0, 0xc3, 0x4b, 0x01, 0x1e, 0x9b, 0x95, 0x0d, 0x95, 0xa7, 0x53, 0x86, 0xbb, 0x77, 0xb3, 0x2e,
        0xaa, 0xa6, 0x93, 0x99, 0x4f, 0x75, 0xb5, 0x8d, 0xc5, 0x5d, 0xa6, 0x3b, 0x71, 0x20, 0xe4, 0x2d, 0x0c, 0xfc,
        0x57, 0xfc, 0x33, 0x76, 0x0b, 0x5d, 0xdf, 0x61, 0x80, 0x50, 0x22, 0x2e, 0x30, 0xd6, 0x65, 0xd1, 0x8a, 0xe4,
        0x54, 0xf2, 0xc8, 0xa1, 0xc0, 0x2d, 0xed, 0x5a, 0xeb, 0x30, 0x9d, 0x8d, 0xf9, 0xde, 0xd2, 0x47, 0x71, 0x73,
        0xd4, 0x77, 0x76, 0xad, 0xc4, 0x5c, 0x32, 0x49, 0xbc, 0xcc, 0xa7, 0xcb, 0xde, 0x4f, 0x2d, 0x0c, 0x4d, 0xaa,
        0x9b, 0x6c, 0xf1, 0x49, 0xdd, 0x3a, 0xd3, 0x89, 0xaf, 0x6f, 0x14, 0x33, 0xc0, 0x40, 0xce, 0xb7, 0x1d, 0x6c,
        0xe1, 0x28, 0x78, 0x12, 0x1b, 0xc0, 0xd9, 0x1e, 0xa1, 0x14, 0x4e, 0xae, 0x1d, 0x8a, 0x79, 0x1f, 0xf4, 0x3e,
        0x21, 0x56, 0x5e, 0xb1, 0x90, 0x63, 0x28, 0xc1, 0xcf, 0xb4, 0xf9, 0xf4, 0x50, 0x51, 0xd2, 0xeb, 0xbe, 0x29,
        0xe7, 0xeb, 0x15, 0x06, 0xb7, 0x99, 0x01, 0xe5, 0x25, 0xd4, 0x3f, 0x8a, 0x5a, 0x17, 0xc1, 0x4a, 0x87, 0x18,
        0x16, 0x3e, 0xaf, 0xe4, 0xc7, 0x75, 0x4b, 0x95, 0x68, 0x9f, 0x50, 0x28, 0xd1, 0x8a, 0x87, 0x5d, 0x0a, 0x7a,
        0x0d, 0xfa, 0x95, 0xa7, 0xce, 0x05, 0x85, 0xe6, 0xf3, 0x34, 0x82, 0xac, 0x73, 0xf8, 0xc4, 0x7c, 0x6b, 0x9a,
        0x52, 0xcb, 0x99, 0x41, 0xfc, 0x40, 0xac, 0xf8, 0x08, 0x4c, 0x16, 0x4c, 0x4c, 0x8d, 0x15, 0x0b, 0x04, 0xbe,
        0x8e, 0x09, 0xa0, 0xe9, 0x30, 0x0e, 0xd5, 0x61, 0xf7, 0x95, 0xcd, 0x88, 0x35, 0x0a, 0x7c, 0x1b, 0x67, 0x8c,
        0xe1, 0xb8, 0x2c, 0x91, 0xa1, 0x12, 0x03, 0x3c, 0xef, 0xd2, 0x30, 0x38, 0x75, 0x2a, 0x7c, 0xb2, 0xab, 0xaa,
        0x68, 0x7e, 0xff, 0xd4, 0xdb, 0xb9, 0x17, 0xca, 0x6a, 0x96, 0x19, 0xdb, 0x15, 0xd1, 0x46, 0xe2, 0xf8, 0xe6,
        0x3f, 0x9a, 0xdf, 0x29, 0xa9, 0x96, 0xbd, 0xb1, 0x9c, 0xa3, 0x2e, 0x42, 0x62, 0x64, 0xd4, 0xc2, 0x84, 0xec,
        0x82, 0x0e, 0x3b, 0x2f, 0x03, 0x3e, 0x2f, 0x18, 0x79, 0x17, 0x5a, 0xff, 0x08, 0x74, 0x39, 0xdc, 0x0e, 0x1f,
        0x26, 0x20, 0x6b, 0xde, 0x12, 0x62, 0x1a, 0x22, 0xde, 0xab, 0xa4, 0x0c, 0x4f, 0x8c, 0xf8, 0xec, 0x61, 0xae,
        0xce, 0x24, 0x25, 0xc4, 0x1f, 0x81, 0x8a, 0xff, 0x8a, 0x12, 0x7a, 0x43, 0x1c, 0x72, 0xa0, 0xf6, 0x37, 0x45,
        0x84, 0x5f, 0x27, 0x00, 0xb4, 0xb9, 0xb6, 0xc8, 0x09, 0x14, 0xe9, 0x17, 0x3b, 0xef, 0x85, 0xc6, 0x0e, 0xa1,
        0x08, 0x0f, 0x22, 0xbf, 0x17, 0xf5, 0x31, 0x84, 0xa9, 0x45, 0x4e, 0x33, 0x7f, 0x67, 0xfe, 0x79, 0x51, 0x2e,
        0x93, 0x4a, 0x15, 0xc0, 0x23, 0x54, 0x42, 0x48, 0xf6, 0xec, 0x5b, 0x0f, 0xc9, 0x7c, 0x35, 0xcd, 0xd4, 0x43,
        0x21, 0xe9, 0x96, 0x9e, 0xd9, 0xeb, 0x42, 0x74, 0x7e, 0xe3, 0xcf, 0x92, 0x78, 0x01, 0x04, 0x5c, 0xe9, 0x99,
        0x79, 0x66, 0xff, 0x69, 0xbd, 0x30, 0x36, 0x9d, 0x9b, 0x84, 0x90, 0x36, 0x72, 0x23, 0xf9, 0xb7, 0x81, 0x9d,
        0xd5, 0xbb, 0xd5, 0xd7, 0x58, 0x47, 0x38, 0xcc, 0x0a, 0xf3, 0xcb, 0x05, 0x32, 0x64, 0xdc, 0x48, 0xf2, 0x09,
        0xbd, 0xa5, 0x23, 0x01, 0x8f, 0x37, 0xb4, 0xd4, 0xf5, 0x09, 0xfb, 0xe5, 0x97, 0xca, 0x31, 0x74, 0xd3, 0x89,
        0x99, 0xb3, 0xca, 0xdf, 0x90, 0x9a, 0xa4, 0xb5, 0x0a, 0xea, 0x7d, 0x75, 0xa1, 0x0f, 0x44, 0x42, 0xd2, 0x8d,
        0x91, 0xbe, 0x7f, 0x27, 0xc4, 0x27, 0xb4, 0x83, 0xba, 0xad, 0x15, 0x52, 0x59, 0xa1, 0x6e, 0x5f, 0xa7, 0xe5,
        0x88, 0x4b, 0x4d, 0x67, 0x06, 0x3e, 0x08, 0xcb, 0x57, 0x0e, 0x96, 0x67, 0xf9, 0x4b, 0xc9, 0x0e, 0xf9, 0x6b,
        0xc2, 0x01, 0xc3, 0x8f, 0x16, 0xe1, 0x7e, 0x2e, 0x2d, 0x8f, 0x9d, 0x1e, 0x88, 0x3f, 0x05, 0xe1, 0x44, 0x91,
        0x64, 0xb2, 0x76, 0xf5, 0x35, 0xe9, 0xb1, 0x02, 0x2d, 0x96, 0xfc, 0x86, 0x29, 0x65, 0xd0, 0x6e, 0x27, 0xba,
        0x3d, 0x2d, 0xa6, 0x42, 0xee, 0x9f, 0xd7, 0xc2, 0x42, 0xb3, 0x62, 0xa3, 0x30, 0x24, 0x24, 0x71, 0xdd, 0xe7,
        0x6c, 0x6e, 0x7a, 0xfb, 0x20, 0x0e, 0x83, 0x19, 0x9a, 0x1b, 0x73, 0x72, 0x3b, 0xf5, 0x48, 0xba, 0xf4, 0xce,
        0x45, 0xae, 0x60, 0x12, 0xdd, 0xbe, 0x27, 0xb9, 0xd3, 0xa8, 0xf3, 0x98, 0xc6, 0x6e, 0x1c, 0x34, 0x59, 0x6e,
        0xed, 0xe1, 0xb7, 0xa8, 0xc5, 0xd1, 0x21, 0x23, 0x60, 0xcf, 0x86, 0xd0, 0x03, 0x58, 0xe2, 0xc5, 0x53, 0x58,
        0x42, 0x05, 0x8a, 0x76, 0x7b, 0x1a, 0x14, 0xa0, 0x71, 0xee, 0xc6, 0xe9, 0x38, 0xf1, 0x6e, 0xe0, 0x1c, 0xc6,
        0x82, 0x25, 0x0b, 0x4a, 0x47, 0xb8, 0x1a, 0xe5, 0x21, 0x27, 0x12, 0x52, 0x1d, 0xef, 0xc3, 0xca, 0x4e, 0x03,
        0xbe, 0xaf, 0x0b, 0x5c, 0x8e, 0x6c, 0xb4, 0x30, 0x61, 0xe9, 0x45, 0xc4, 0xa5, 0xc1, 0x87, 0x49, 0xb5, 0x01,
        0x6e, 0x35, 0x20, 0xc7, 0x58, 0xed, 0xed, 0x6c, 0x56, 0x6c, 0x81, 0xd9, 0x8b, 0x58, 0x8d, 0xe0, 0x24, 0xba,
        0x27, 0x69, 0xa8, 0xcb, 0x8c, 0xf7, 0xa1, 0x30, 0x82, 0xd4, 0xa5, 0xe0, 0x96, 0x33, 0x2f, 0x7e, 0xdf, 0x9f,
        0x28, 0x3a, 0xa8, 0xab, 0xcf, 0x50, 0x70, 0xd9, 0xaf, 0xf1, 0xfe, 0x29, 0xb3, 0x84, 0x55, 0x36, 0x02, 0xc3,
        0xf9, 0x11, 0xd2, 0x09, 0x3f, 0xbd, 0x4e, 0x12, 0x92, 0x56, 0x1c, 0xad, 0x72, 0x59, 0xae, 0x88, 0x40, 0x6f,
        0xbd, 0x50, 0x69, 0x99, 0xe9, 0x40, 0x21, 0x15, 0xdf, 0x19, 0x6d, 0xcf, 0x82, 0x83, 0x67, 0xd5, 0x30, 0x79,
        0x32, 0x94, 0xd4, 0xf0, 0x43, 0xf1, 0x66, 0x07, 0xe2, 0xab, 0x44, 0x94, 0x0b, 0x51, 0x91, 0x1d, 0xab, 0x3b,
        0xe4, 0x39, 0x81, 0x35, 0x57, 0x10, 0xd8, 0xaf, 0x15, 0x98, 0x0e, 0xf0, 0x9c, 0xdc, 0x28, 0x03, 0x7e, 0xa2,
        0x36, 0x8b, 0xbc, 0x29, 0x5a, 0x92, 0xef, 0x46, 0xc2, 0x6a, 0x04, 0x10, 0xc7, 0x4e, 0xb9, 0x1f, 0x53, 0x56,
        0x18, 0xfb, 0xba, 0xe4, 0x59, 0x5c, 0x94, 0xaa, 0x37, 0x33, 0x85, 0x20, 0xca, 0x6d, 0x72, 0x84, 0x75, 0xe2,
        0x68, 0xb4, 0xd2, 0x27, 0x38, 0x65, 0x7f, 0x6c, 0x22, 0xe3, 0x0a, 0xa3, 0x2d, 0x4c, 0x84, 0xa7, 0x88, 0xca,
        0x65, 0xcc, 0x79, 0xe8, 0x92, 0x4a, 0x7a, 0xd4, 0xfb, 0xa8, 0xeb, 0x33, 0xdf, 0x55, 0xcf, 0x6a, 0x92, 0x38,
        0xd0, 0xd6, 0xcc, 0x84, 0xe4, 0x3d, 0xdd, 0x4c, 0x67, 0x74, 0x48, 0x30, 0xca, 0x37, 0x48, 0x2a, 0x67, 0xf3,
        0xe0, 0x64, 0xf3, 0x7f, 0xb4, 0x80, 0xb8, 0xe1, 0xc3, 0xc8, 0xba, 0x0d, 0x6b, 0x58, 0x13, 0x17, 0x95, 0x15,
        0x85, 0x03, 0x14, 0x1c, 0x68, 0xe9, 0x69, 0xa9, 0xca, 0x32, 0xd4, 0x79, 0x9b, 0x3a, 0x46, 0x11, 0x31, 0xb2,
        0x7a, 0xa6, 0xaf, 0x6f, 0x65, 0xec, 0x71, 0xd3, 0x10, 0x9e, 0x4c, 0xb2, 0x14, 0x48, 0x7f, 0xcf, 0xd0, 0x37,
        0xa6, 0xa4, 0x00, 0x78, 0x2f, 0x04, 0xf7, 0xc8, 0x2d, 0x76, 0x9d, 0x44, 0x57, 0xa3, 0xdb, 0x52, 0xb9, 0x24,
        0x4a, 0x37, 0x3e, 0x82, 0xee, 0xf4, 0x62, 0x77, 0xb2, 0x55, 0x67, 0xfc, 0xab, 0xd8, 0x38, 0x53, 0x93, 0xf4,
        0xd1, 0xb4, 0x41, 0x54, 0x27, 0x3f, 0xd4, 0x98, 0xde, 0xd3, 0x7c, 0x2b, 0x95, 0xfc, 0xb8, 0x9b, 0x0a, 0x1b,
        0x21, 0x7d, 0x63, 0x77, 0x0a, 0x8a, 0xcc, 0xfa, 0xcd, 0x05, 0x18, 0x2f, 0x24, 0xd1, 0x53, 0xfd, 0xf6, 0x56,
        0x93, 0x6c, 0x03, 0x47, 0x7b, 0x4a, 0x7f, 0x0f, 0x18, 0x5c, 0xff, 0x45, 0x9e, 0x8a, 0x3d, 0xeb, 0x38, 0x54,
        0x25, 0xab, 0x20, 0xf6, 0xd4, 0x67, 0x0d, 0x16, 0xeb, 0x15, 0x33, 0x00, 0x1c, 0x35, 0x52, 0x61, 0xd9, 0x69,
        0xa5, 0x53, 0xcb, 0x78, 0x9e, 0xe3, 0x2f, 0xfa, 0xa5, 0xb5, 0x42, 0xed, 0xf0, 0xaf, 0x83, 0xe4, 0xbf, 0x5a,
        0x17, 0xc7, 0x63, 0xea, 0x3e, 0xa8, 0x30, 0x7a, 0x4c, 0x30, 0x51, 0xfa, 0xe7, 0x5e, 0x74, 0x10, 0x1b, 0xcc,
        0x13, 0x18, 0xa5, 0xaa, 0x1d, 0xca, 0xe5, 0x2d, 0x97, 0x57, 0xf2, 0xa7, 0xbd, 0x2a, 0xa7, 0xb3, 0x55, 0x9d,
        0xdc, 0xad, 0xeb, 0x92, 0x6c, 0x37, 0x73, 0x27, 0x0e, 0x42, 0xe0, 0x58, 0x50, 0x80, 0x93, 0x45, 0xd7, 0x52,
        0x6f, 0x62, 0x01, 0xb3, 0xa4, 0xe1, 0x7e, 0xba, 0xea, 0x66, 0x71, 0x95, 0xa0, 0x43, 0xfd, 0x66, 0x26, 0x0e,
        0x6f, 0x31, 0x14, 0xf3, 0x13, 0xb1, 0x97, 0x03, 0x0b, 0xdd, 0xd5, 0x4a, 0x03, 0x3a, 0x54, 0x35, 0xb9, 0xfb,
        0x66, 0x98, 0xae, 0x5b, 0xc4, 0xd1, 0x58, 0xc2, 0xc5, 0x5d, 0x2c, 0xd2, 0x1e, 0xd9, 0x93, 0x4e, 0xb2, 0x48,
        0x8d, 0xac, 0xd5, 0x83, 0x8d, 0x13, 0x62, 0x4d, 0x18, 0xd2, 0x31, 0xf4, 0x9f, 0x6a, 0x64, 0x31, 0xcb, 0xa5,
        0x78, 0xe4, 0x22, 0x72, 0xf8, 0x1f, 0x1c, 0x85, 0x44, 0x4c, 0x1e, 0x4d, 0x32, 0x60, 0xf3, 0x2f, 0xa1, 0x4f,
        0x8c, 0x7f, 0x95, 0x27, 0x60, 0xf9, 0x0e, 0x9e, 0x16, 0xfb, 0xc4, 0x10, 0xcc, 0x68, 0x6c, 0x49, 0x53, 0x77,
        0xff, 0x9f, 0x82, 0xe3, 0xad, 0xe7, 0x99, 0xfd, 0xe3, 0xb2, 0x81, 0x17, 0x63, 0xed, 0xe4, 0xa9, 0x94, 0x14,
        0x1b, 0xdb, 0x80, 0xa1, 0x4f, 0x5d, 0xe9, 0x65, 0x29, 0x22, 0xce, 0x0e, 0x17, 0x7f, 0xdd, 0x91, 0x57, 0xc7,
        0x99, 0xa0, 0xe6, 0x6e, 0x88, 0x70, 0xf2, 0x65, 0x65, 0xe5, 0xb6, 0xde, 0xe6, 0xea, 0x9f, 0xa6, 0x7b, 0x8e,
        0xdf, 0x40, 0x49, 0xc4, 0xce, 0xec, 0x89, 0x24, 0xa1, 0x52, 0x40, 0x14, 0x9b, 0x97, 0xc4, 0xc5, 0x76, 0x5a,
        0x55, 0xb3, 0x63, 0xd8, 0x59, 0x54, 0x8f, 0x1e, 0xcd, 0x74, 0x01, 0xb8, 0xc5, 0xff, 0xc3, 0xde, 0x90, 0x74,
        0xec, 0xb6, 0xc0, 0x46, 0x9a, 0xe0, 0xee, 0x2e, 0x1c, 0xce, 0x4f, 0xb1, 0xc3, 0x2c, 0x90, 0x12, 0xad, 0x90,
        0x86, 0xb4, 0xa8, 0x13, 0xaf, 0x6e, 0xca, 0x41, 0xa7, 0x39, 0x6f, 0x7a, 0x10, 0x1b, 0x81, 0x5a, 0x5c, 0x0c,
        0xaf, 0x3f, 0xd5, 0xd7, 0x22, 0x12, 0x8e, 0x72, 0x79, 0x29, 0xea, 0xee, 0xed, 0x5b, 0x82, 0x90, 0x62, 0x39,
        0x0e, 0x99, 0x61, 0xc0, 0x80, 0x82, 0xb1, 0xdb, 0xb3, 0xe8, 0x2a, 0x0b, 0xb6, 0x31, 0x06, 0xf9, 0x00, 0xbe,
        0x1c, 0xce, 0x91, 0x8f, 0x69, 0x08, 0x79, 0x95, 0x90, 0x9f, 0x1e, 0x4b, 0xbb, 0x03, 0x5f, 0x55, 0x8c, 0x6b,
        0x35, 0x67, 0x95, 0xe3, 0xf3, 0xad, 0x41, 0x27, 0xfa, 0x09, 0xc5, 0x6f, 0xe5, 0x9a, 0x58, 0x00, 0x98, 0x05,
        0xd2, 0xd6, 0x5e, 0x51, 0xf9, 0x28, 0x69, 0xa8, 0x7b, 0x89, 0x73, 0x7e, 0xd9, 0xf8, 0x42, 0xad, 0x4d, 0x68,
        0xf2, 0xf9, 0xde, 0xa4, 0x2f, 0x95, 0x93, 0x2d, 0x7d, 0x6c, 0xf9, 0x0d, 0xbf, 0x27, 0x89, 0x80, 0xf9, 0xf7,
        0xa0, 0xf2, 0x3f, 0x36, 0xa6, 0x71, 0xd3, 0x05, 0x6f, 0xad, 0xc5, 0xed, 0x9d, 0x30, 0x8e, 0xc2, 0xeb, 0xb1,
        0x02, 0x94, 0xe0, 0xae, 0xd3, 0xc8, 0x3e, 0x10, 0xff, 0x06, 0xcb, 0xa7, 0x5f, 0x90, 0xcf, 0x74, 0x6e, 0xcd,
        0x2b, 0xef, 0x16, 0x9a, 0xee, 0xbd, 0xee, 0xf6, 0x12, 0xef, 0x0c, 0x6e, 0x7e, 0xe8, 0x62, 0xb9, 0x0f, 0xed,
        0x14, 0x0c, 0xdf, 0xee, 0xf4, 0x19, 0xab, 0x60, 0xe8, 0x93, 0x30, 0x9f, 0x86, 0x49, 0x64, 0x34, 0xbd, 0x21,
        0x57, 0x09, 0x2f, 0xd6, 0x1a, 0xfc, 0x7d, 0x06, 0xf7, 0x05, 0xa3, 0x4f, 0xff, 0xbc, 0x2d, 0xb2, 0x77, 0x66,
        0xb8, 0x98, 0x14, 0xe4, 0xea, 0xa0, 0x42, 0x12, 0x23, 0xc6, 0x46, 0x80, 0x32, 0x0b, 0xf6, 0xc7, 0x53, 0xe1,
        0xd8, 0xe0, 0xdb, 0xc6, 0x4b, 0x14, 0x7e, 0x6a, 0xa4, 0x7e, 0x45, 0x08, 0x3b, 0x5a, 0x59, 0xa1, 0x9b, 0x71,
        0x72, 0xfd, 0xec, 0xff, 0x6d, 0x95, 0x69, 0xc9, 0xee, 0xbc, 0xae, 0x6d, 0x4f, 0xcd, 0x91, 0x67, 0x90, 0x69,
        0xed, 0x20, 0x53, 0x39, 0x2a, 0x6a, 0x2f, 0x1d, 0x4e, 0x76, 0x3e, 0x12, 0x61, 0x3c, 0xa8, 0x76, 0x6d, 0x8c,
        0x9a, 0x7f, 0xd3, 0x78, 0xaa, 0x3d, 0xdb, 0xde, 0x0a, 0xd0, 0xbf, 0xb0, 0x03, 0x0f, 0xc0, 0xa2, 0xbc, 0xa2,
        0x95, 0x88, 0xad, 0xe5, 0x1c, 0x03, 0x66, 0xca, 0xc8, 0x8f, 0x95, 0x75, 0xbd, 0x4d, 0xf0, 0xc9, 0xf4, 0x6a,
        0x63, 0x36, 0xc0, 0xa3, 0xa2, 0xfa, 0xc7, 0xb4, 0x2a, 0x1a, 0x64, 0x8d, 0x88, 0x70, 0xf6, 0x25, 0xbd, 0xae,
        0xaa, 0x87, 0x99, 0xde, 0xe4, 0x32, 0x00, 0x66, 0xd4, 0x19, 0xc2, 0x8f, 0xb7, 0x46, 0x4a, 0x26, 0x6e, 0x27,
        0x3a, 0x74, 0xe0, 0x35, 0xa2, 0x91, 0x16, 0x0e, 0xdc, 0xff, 0x73, 0x2e, 0x12, 0x3f, 0x54, 0x0e, 0x62, 0xea,
        0xa8, 0x10, 0xcf, 0xb4, 0x1b, 0x3c, 0x07, 0x4d, 0xd2, 0xff, 0x0e, 0x32, 0x44, 0x9e, 0xfb, 0x48, 0x97, 0x94,
        0x98, 0x70, 0xfa, 0x85, 0x5a, 0xed, 0x5a, 0x5c, 0xaf, 0x52, 0xc0, 0x72, 0x3a, 0x8e, 0x77, 0x93, 0x23, 0x59,
        0x9d, 0x40, 0x7f, 0xc2, 0xc7, 0x6a, 0x45, 0x98, 0x2b, 0xf9, 0xce, 0xc4, 0x6b, 0x48, 0xf3, 0x9f, 0x24, 0x45,
        0xcb, 0xc1, 0xb5, 0x79, 0xc9, 0xb4, 0x52, 0x11, 0x1f, 0x6b, 0xd9, 0xb7, 0x3f, 0xf3, 0x28, 0x71, 0x19, 0x15,
        0x51, 0xdc, 0x99, 0x60, 0x75, 0x1f, 0x22, 0x5c, 0x21, 0x85, 0x30, 0x36, 0xba, 0x06, 0x74, 0xdd, 0x96, 0x5e,
        0xa9, 0xc2, 0x45, 0x02, 0x9f, 0x8a, 0xd0, 0xb4, 0x54, 0x67, 0x5d, 0x6f, 0xf6, 0x38, 0x85, 0xf7, 0x71, 0xbc,
        0x92, 0x14, 0x97, 0xaa, 0x2a, 0x8c, 0x5e, 0xa2, 0xf9, 0x7d, 0x79, 0x15, 0x1c, 0x9b, 0x89, 0xe7, 0x1f, 0x16,
        0xaa, 0x1b, 0x9b, 0xfa, 0x76, 0xd8, 0x8f, 0x52, 0x55, 0x5e, 0x9a, 0xf2, 0xd5, 0x0a, 0xe0, 0x27, 0xce, 0x74,
        0x74, 0xac, 0x6b, 0x14, 0x65, 0x68, 0xdb, 0xa8, 0xce, 0x70, 0x2b, 0x10, 0x60, 0x0c, 0xc0, 0x79, 0x4e, 0x98,
        0x4b, 0xd8, 0x1f, 0xa6, 0xdd, 0xf3, 0xa9, 0x23, 0x08, 0xa9, 0xbd, 0xde, 0x67, 0x2d, 0x77, 0x05, 0xcc, 0x22,
        0xaa, 0x4e, 0x52, 0xb4, 0x95, 0x93, 0x6f, 0xe3, 0xc6, 0xce, 0xdd, 0xcc, 0x4d, 0x88, 0x89, 0x93, 0x9b, 0xb1,
        0xe8, 0x70, 0x46, 0xde, 0x27, 0x6d, 0xa9, 0x74, 0x30, 0xaa, 0xd9, 0xc1, 0x23, 0x5d, 0x8c, 0x7a, 0x0f, 0xaa,
        0x52, 0x05, 0x60, 0x51, 0xe4, 0xab, 0xdd, 0xb1, 0xdd, 0x05, 0x23, 0xc2, 0xd8, 0xc1, 0xbf, 0x1c, 0xe6, 0xc0,
        0xa4, 0x09, 0x83, 0x3d, 0x69, 0xe6, 0x43, 0x18, 0xe7, 0xef, 0xfb, 0x25, 0x49, 0xbe, 0xe1, 0xf3, 0x90, 0x70,
        0x00, 0xb3, 0xf0, 0x14, 0x43, 0xed, 0xc0, 0x51, 0x87, 0x5a, 0x42, 0x96, 0x5e, 0x19, 0x27, 0xf3, 0x2a, 0xf8,
        0x8a, 0x20, 0x92, 0x51, 0x55, 0x10, 0x19, 0x91, 0xd8, 0x0e, 0x47, 0x07, 0x03, 0x9b, 0x73, 0xde, 0x1c, 0xa0,
        0xfb, 0x1b, 0x3d, 0x59, 0xc4, 0x38, 0x41, 0xfb, 0x73, 0xeb, 0x6a, 0x63, 0x4d, 0xba, 0x9d, 0xc0, 0x78, 0xec,
        0xf7, 0xaf, 0x85, 0x55, 0xff, 0x41, 0x75, 0x29, 0xad, 0x82, 0xf3, 0xc1, 0x1c, 0xb2, 0xf6, 0x47, 0xb7, 0x69,
        0x68, 0xc6, 0x93, 0xdf, 0x73, 0xbb, 0xcd, 0xa1, 0xcd, 0x9d, 0x3c, 0xce, 0xcb, 0xdd, 0x67, 0xce, 0x8d, 0x94,
        0xc2, 0x91, 0xb2, 0xa5, 0xcc, 0x8b, 0x15, 0xfc, 0xbd, 0x99, 0x66, 0x9b, 0x0f, 0x4c, 0xd4, 0x3a, 0xbe, 0x1f,
        0x49, 0x71, 0xb2, 0x5e, 0xda, 0xd5, 0x1e, 0x02, 0xc8, 0x54, 0x36, 0xdd, 0x1a, 0xc4, 0x02, 0xed, 0x13, 0x6d,
        0xf8, 0x33, 0xaa, 0xd8, 0xc1, 0xb3, 0x2a, 0xad, 0x2d, 0xc2, 0x8c, 0x84, 0x14, 0x34, 0x81, 0xa3, 0x31, 0xbe,
        0x24, 0xe3, 0x60, 0x80, 0x31, 0xf5, 0x6d, 0x93, 0x7c, 0xbe, 0x01, 0x4b, 0x9c, 0xc6, 0x41, 0xe1, 0x35, 0xff,
        0x7f, 0x69, 0x54, 0x00, 0x15, 0xfb, 0x43, 0x29, 0x0e, 0x76, 0x5a, 0x98, 0x8e, 0xaf, 0xb2, 0x64, 0x48, 0x3d,
        0x9d, 0x19, 0x9e, 0x2b, 0x9c, 0xc7, 0x69, 0x91, 0x0d, 0xe7, 0x40, 0xf0, 0x29, 0x9d, 0x1b, 0x79, 0x30, 0x92,
        0x91, 0x18, 0x0f, 0x79, 0x89, 0xb6, 0x8a, 0x95, 0x78, 0xce, 0xf0, 0x2e, 0xb4, 0x21, 0xa4, 0x17, 0x5b, 0x40,
        0x51, 0x21, 0xbc, 0x4b, 0x93, 0x2a, 0x89, 0x3b, 0x87, 0x34, 0x57, 0x6d, 0x3c, 0xf0, 0x07, 0xcc, 0xd4, 0xd4,
        0x81, 0xbf, 0xe2, 0xf6, 0xe4, 0x3d, 0xd7, 0xe8, 0x09, 0x97, 0x69, 0x4d, 0xa8, 0x8e, 0xf6, 0x6f, 0xff, 0x6c,
        0x54, 0x00, 0xa5, 0x38, 0xfa, 0xef, 0x88, 0xc8, 0xc3, 0xaa, 0xcc, 0x14, 0xe3, 0x3e, 0xd5, 0x01, 0x70, 0xe2,
        0x02, 0xec, 0x9d, 0x94, 0xb1, 0x31, 0xde, 0x60, 0xeb, 0x1d, 0xaf, 0xba, 0x78, 0xd7, 0x02, 0x76, 0x51, 0xa6,
        0x69, 0x2a, 0xec, 0x83, 0x81, 0xeb, 0x9f, 0x0e, 0xd2, 0x5c, 0x0c, 0xb2, 0xb3, 0xff, 0x2a, 0x13, 0x84, 0xa6,
        0x97, 0xbf, 0x34, 0xb1, 0x0a, 0x05, 0xdb, 0xa8, 0x8f, 0xd2, 0x65, 0x9b, 0x91, 0xe9, 0x3a, 0x49, 0x47, 0x39,
        0xbc, 0xf4, 0x62, 0xca, 0xe0, 0xdb, 0xfc, 0x42, 0xeb, 0x6a, 0x51, 0x73, 0xed, 0xfb, 0xdf, 0x52, 0xc1, 0x9d,
        0x32, 0xc3, 0x14, 0x36, 0x7c, 0x0e, 0x03, 0x8c, 0xe9, 0x0b, 0xb6, 0x01, 0xde, 0x7d, 0x29, 0xe7, 0x3d, 0xaf,
        0x74, 0xc7, 0xa9, 0x8b, 0xb2, 0x55, 0xb2, 0x00, 0xe1, 0xd1, 0x8d, 0xc4, 0xce, 0xeb, 0x8a, 0xb2, 0x4d, 0xb6,
        0x51, 0xdd, 0xc4, 0x41, 0xf5, 0x1c, 0x0a, 0x13, 0x5a, 0x28, 0x01, 0xc2, 0x54, 0x98, 0xb9, 0x00, 0x6b, 0xa7,
        0x35, 0x22, 0xcc, 0xfb, 0xcd, 0xcc, 0xc4, 0x37, 0xa3, 0xad, 0x92, 0x39, 0x77, 0xff, 0x4f, 0xb4, 0x73, 0x92,
        0xe8, 0x0c, 0xbe, 0x03, 0x28, 0x1d, 0x9f, 0x79, 0x41, 0xba, 0x43, 0xea, 0xa7, 0xb7, 0x8f, 0xe3, 0xef, 0xd6,
        0xb9, 0x5e, 0xa3, 0xef, 0x07, 0x24, 0x71, 0xe8, 0xf8, 0x0e, 0x91, 0x21, 0x29, 0xad, 0xcc, 0x2f, 0x10, 0xc7,
        0x90, 0xa1, 0xa5, 0x79, 0xc9, 0xa2, 0x49, 0x0a, 0x05, 0xc4, 0xfc, 0x30, 0xd0, 0x55, 0x00, 0x12, 0x00, 0x4a,
        0x67, 0xca, 0x6e, 0x53, 0x0e, 0x22, 0x3f, 0xe2, 0xa7, 0x7f, 0xb9, 0xd7, 0xe0, 0x84, 0xae, 0xa2, 0x40, 0x86,
        0xaa, 0xc9, 0x8f, 0xf9, 0xa5, 0x4d, 0x31, 0xfc, 0xf7, 0x31, 0x7c, 0x95, 0x04, 0x6f, 0x8b, 0xf3, 0x49, 0x1c,
        0x22, 0x2b, 0xdc, 0x46, 0xf4, 0x2e, 0xa3, 0x33, 0x0e, 0x11, 0x3f, 0xd4, 0x4f, 0x8a, 0x43, 0x91, 0x15, 0xce,
        0x6f, 0x64, 0x28, 0x2f, 0x70, 0x2a, 0x3a, 0xdb, 0x1e, 0xba, 0x30, 0x3d, 0x6f, 0xfc, 0x9a, 0xa5, 0x49, 0xa5,
        0x97, 0x10, 0xd6, 0xa0, 0x21, 0xe7, 0x7a, 0xec, 0x4e, 0x53, 0xc0, 0xab, 0xcd, 0xe8, 0xf1, 0x76, 0xf9, 0x60,
        0x83, 0xd9, 0xfb, 0x78, 0x2b, 0xb3, 0x23, 0x38, 0xe3, 0x7f, 0xf4, 0xf8, 0x06, 0x7c, 0xe2, 0xac, 0x24, 0x30,
        0x91, 0xef, 0x01, 0xb4, 0x05, 0xae, 0xd5, 0x67, 0x34, 0x97, 0x92, 0x63, 0xcf, 0xba, 0x87, 0x3e, 0xdf, 0xb0,
        0xa3, 0xe4, 0x4f, 0x97, 0xed, 0x14, 0xe6, 0x76, 0xfa, 0x7d, 0x63, 0x86, 0x93, 0xfc, 0xe5, 0xe6, 0x21, 0xea,
        0xff, 0xd2, 0xb4, 0x2e, 0xf8, 0xde, 0x03, 0xbf, 0xc9, 0x10, 0xe3, 0x55, 0x37, 0x40, 0x33, 0xc9, 0xd4, 0x0a,
        0xcb, 0xf8, 0x62, 0xf0, 0x1f, 0xb8, 0x62, 0xc0, 0x2f, 0x56, 0x0c, 0x06, 0x4d, 0xa8, 0xd6, 0x85, 0x70, 0x2f,
        0x55, 0xcb, 0x7c, 0x9f, 0x68, 0xfd, 0xf5, 0xfc, 0xea, 0x9c, 0xb9, 0x3b, 0x0a, 0xcc, 0xa7, 0x08, 0x9a, 0xf6,
        0xd2, 0xd8, 0xe9, 0x38, 0x88, 0xda, 0x97, 0x85, 0x22, 0xd3, 0x37, 0x8a, 0x5c, 0x5d, 0xe0, 0x78, 0x0d, 0xe9,
        0x5d, 0x0f, 0x20, 0x98, 0xea, 0x4d, 0x29, 0xc3, 0x0d, 0x79, 0xfc, 0x10, 0x27, 0x3f, 0xc5, 0x26, 0xa4, 0x99,
        0x84, 0xd4, 0xc1, 0xf9, 0x03, 0x22, 0xf5, 0x74, 0x1f, 0x8e, 0xfd, 0xc8, 0xc3, 0x7b, 0x32, 0xcb, 0xb1, 0x26,
        0xa1, 0x84, 0x08, 0x2c, 0x22, 0x17, 0x4e, 0xa2, 0x08, 0xe3, 0x2a, 0xcc, 0xdd, 0xe2, 0x89, 0xc4, 0xe7, 0xab,
        0xc4, 0x67, 0x72, 0xee, 0xf1, 0x96, 0xe0, 0xa6, 0xfa, 0xe9, 0x62, 0xec, 0x2b, 0x5c, 0x1b, 0xbe, 0x5a, 0x90,
        0x71, 0x10, 0x2d, 0xd3, 0x4e, 0x50, 0x03, 0x7e, 0xf3, 0xd1, 0xac, 0x7b, 0x8e, 0xcc, 0x1d, 0x0b, 0x53, 0xbe,
        0x47, 0xdb, 0x85, 0x44, 0x23, 0x9c, 0xe0, 0x63, 0xfd, 0xc4, 0x20, 0xec, 0xdc, 0x07, 0xf4, 0x41, 0x22, 0x15,
        0xb0, 0x86, 0x50, 0x07, 0x17, 0x7c, 0x25, 0x05, 0x09, 0x7c, 0x7c, 0xcb, 0x13, 0x60, 0x96, 0x5c, 0xc9, 0x6b,
        0xaa, 0xce, 0xe5, 0x05, 0x70, 0xe6, 0xec, 0xf7, 0x89, 0x01, 0xe4, 0xb1, 0xf7, 0xfc, 0x88, 0x65, 0x0e, 0xdd,
        0x88, 0x1c, 0xb9, 0x05, 0xbd, 0x4e, 0x47, 0xf7, 0x88, 0x7f, 0xa6, 0xe0, 0x7c, 0x01, 0x30, 0x0d, 0xfe, 0x1f,
        0x5f, 0x8d, 0x7d, 0xa2, 0x87, 0x60, 0x2a, 0x4c, 0x00, 0xf0, 0x3e, 0x4e, 0x41, 0x02, 0x20, 0x09, 0x9a, 0x55,
        0x6f, 0x5e, 0x87, 0xf1, 0xb9, 0x96, 0x26, 0xa6, 0x73, 0x6b, 0x62, 0x27, 0x5a, 0x90, 0x6d, 0xdd, 0xd4, 0x37,
        0xe9, 0x40, 0x78, 0xa0, 0x38, 0x71, 0xea, 0x95, 0x01, 0x2c, 0x80, 0x10, 0x56, 0x91, 0x48, 0x6c, 0xee, 0xda,
        0xae, 0x66, 0xee, 0x09, 0x1a, 0x61, 0xd2, 0xbd, 0x37, 0xb5, 0xd7, 0x18, 0x1b, 0xa5
};



#endif // PARAMS_H
    