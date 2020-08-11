//
//  RandomNumber1.cpp
//  Statement
//
//  Created by Lee Sheng on 2020/8/3.
//  Copyright © 2020 Lee Sheng. All rights reserved.
//

//#include <stdio.h>
//#include <cstdint>
//#include <cstdio>
//
//struct RandomNumberGenerator {
//    explicit RandomNumberGenerator(uint32_t seed)
//        :iterations{}, number{seed} {}
//    uint32_t next();
//    size_t get_iterations() const;
//private:
//    size_t iterations;
//    uint32_t number;
//};
//
//int main(){
//    RandomNumberGenerator RNG{0x4c4347};
//    while (RNG.next() != 0x474343) {
//        //do nothing...
//    }
//    printf("%zd", RNG.get_iterations());
//}
//
//uint32_t RandomNumberGenerator::next(){
//    ++iterations;
//    number = 0x3FFFFFFF & (0x41C64E6D * number + 12345) % 0x80000000;
//    return number;
//}
//size_t RandomNumberGenerator::get_iterations() const {
//    return iterations;
//}
