//
//  TypeAliasing1.cpp
//  Statement
//
//  Created by Lee Sheng on 2020/8/3.
//  Copyright © 2020 Lee Sheng. All rights reserved.
//

//#include <stdio.h>
//#include <cstdio>
//#include <stdexcept>
//
//template <typename To, typename From>
//struct NarrowCaster {
//    To cast(From value) const {
//        const auto converted = static_cast<To>(value);
//        const auto backwards = static_cast<From>(converted);
//        if (value != backwards) throw std::runtime_error{"Narrow!"};
//        return converted;
//    }
//};
//
//template <typename From>
//using short_caster = NarrowCaster<short, From>;
//
//int main(){
//    try{
//        const short_caster<int> caster;
//        const auto cyclic_short = caster.cast(1472857);
//        printf("cyclic_short:%d\n",cyclic_short);
//    }catch (const std::runtime_error& e){
//        printf("Exceptions:%s\n",e.what());
//    }
//}
