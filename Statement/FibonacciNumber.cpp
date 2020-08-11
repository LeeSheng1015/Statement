//
//  FibonacciNumber.cpp
//  Statement
//
//  Created by Lee Sheng on 2020/8/4.
//  Copyright © 2020 Lee Sheng. All rights reserved.
//

//#include <stdio.h>
//#include <cstdio>
//struct FibonacciIterator {
//    bool operator!=(int x){
//        return x >= current;
//    }
//    FibonacciIterator& operator++(){
//        const auto temp = current;
//        current += last;
//        last = temp;
//        return *this;
//    }
//    int operator*() const{
//        return current;
//    }
//private:
//    int current{1}, last{1};
//};
//
//struct FibonacciRange {
//    explicit FibonacciRange(int max) : max{max}{}
//
//    FibonacciIterator begin() const {
//        return FibonacciIterator{};
//    }
//    int end() const {
//        return max;
//    }
//private:
//    const int max;
//};
//
//int main(){
//    for(const auto i : FibonacciRange{5000}){
//        printf("%d ",i);
//    }
//}
