//
//  cplusplus.cpp
//  GTKit
//
//  Created by wstt on 13-1-23.
//  Copyright (c) 2013年 wstt. All rights reserved.
//

#include "cplusplus.h"

//#import <GT/GTInterface.h>
extern "C"
{
#import <GT/GTInterface.h>
}


void func_cplusplusTest()
{
//    GT_DEBUG_SET_HIDDEN(true);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wwrite-strings"
    char* a[] = {"10051001121021132225400", "10051550121021160734240", "10011501120802182145600", "10013500111228000000087", "10011118120912124706400", "10012504120719213246400", "10011591120722182638300", "10011592120828143227100", "10011509120331095755000", "10011506120505133851000", "10011002120131151122432", "10011505120605105517700", "10011001120328143509300", "10011003120331111407800", "10011003120330160536800", "10011012120516153146400", "10011011120427104208600", "10011018120905141540000", "10011591120722181931700", "10011591120722181931700", "10021012120730104044700", "10063521120615104600900", "10061015120721132741800", "10061015120721134456100", "10161002120705111027000", "10161020120729101801700", "10162020120806211755500", "10163550121116154652860", "10041003110915120341725", "10021008120517133121600", "10021008120517133121600"};
#pragma GCC diagnostic pop
    
    GT_IN_REGISTER_ARRAY("LBS","LBS", a, sizeof(a)/4);
//    GT_IN_REGISTER_ARRAY("LBS","LBS", a, -1);
    GT_LOG_START("file2");
    GT_LOG_END("file2");
    GT_LOG_CLEAN("file2");
    GT_LOG_START("file2");
    
    GT_LOG_D("CPP","cpuUsage:%f", GT_UTIL_GET_CPU_USAGE);
    GT_LOG_D("CPP","usedMemory:%u", GT_UTIL_GET_USED_MEM);
    GT_LOG_D("CPP","freeMemory:%u", GT_UTIL_GET_FREE_MEM);
    
    GT_LOG_END("file2");
    GT_LOG_START("file2");
    GT_LOG_END("file2");
    GT_LOG_CLEAN("file2");
    
    GT_LOG_START("file2");
    GT_LOG_END("file2");
    GT_LOG_CLEAN("file2");
    
    GT_LOG_START("file2");
    GT_LOG_END("file2");
    GT_LOG_CLEAN("file2");
    
}