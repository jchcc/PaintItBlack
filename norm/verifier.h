#pragma once
#include "client_ver.h"

#if CLIENT_VER_RE == 20180621
constexpr auto VERIFY_ADDR = 0x00D4EB98;
constexpr auto VERIFY_STR = "D:\\Source\\Korea\\RO_2018-06-21\\RagnarokClient\\Release Sakray\\RagexeRE.pdb";

#elif CLIENT_VER_RE == 20180530
constexpr auto VERIFY_ADDR = 0x00D4D728;
constexpr auto VERIFY_STR = "D:\\Source\\Korea\\RO_2018-05-30#1\\RagnarokClient\\Release Sakray\\RagexeRE.pdb";

#elif CLIENT_VER_RE == 20200304
constexpr auto VERIFY_ADDR = 0x00CF6DC0;
constexpr auto VERIFY_STR = "D:\\Source\\Korea\\RO_2020-03-04#01\\RagnarokClient\\Release Sakray\\RagexeRE.pdb";

#elif CLIENT_VER == 20190508
constexpr auto VERIFY_ADDR = 0x00B36928;
constexpr auto VERIFY_STR = "D:\\Source\\Korea\\RO_2019-05-08#03\\RagnarokClient\\Release\\Ragexe.pdb";

#elif CLIENT_VER == 20180919
constexpr auto VERIFY_ADDR = 0x00C917F0;
constexpr auto VERIFY_STR = "D:\\Source\\Korea\\RO_2018-09-19\\RagnarokClient\\Release\\Ragexe.pdb";

#elif CLIENT_VER == 20180621
constexpr auto VERIFY_ADDR = 0x00C8E4E0;
constexpr auto VERIFY_STR = "D:\\Source\\Korea\\RO_2018-06-21\\RagnarokClient\\Release\\Ragexe.pdb";

#elif CLIENT_VER == 20180620
constexpr auto VERIFY_ADDR = 0x00C8E4E0;
constexpr auto VERIFY_STR = "D:\\Source\\Korea\\RO_2018-06-20#2\\RagnarokClient\\Release\\Ragexe.pdb";

#elif CLIENT_VER == 20150000
constexpr auto VERIFY_ADDR = 0x00ADB720;
constexpr auto VERIFY_STR = "D:\\Source\\Korea\\RO_2015-05-13\\RagnarokClient\\Release\\Ragexe.pdb";
#endif