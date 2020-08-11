//
//  Read_text.cpp
//  Statement
//
//  Created by Lee Sheng on 2020/8/3.
//  Copyright © 2020 Lee Sheng. All rights reserved.
//

//#include <stdio.h>
//#include <cstdio>
//
//struct TextFile {
//    bool success;
//    const char* contents;
//    size_t n_bytes;
//};
//TextFile read_text_file(const char* path){
//    const static char contents[]{"Sometimes I got in love with you."};
//    return TextFile{
//        true,
//        contents,
//        sizeof(contents)
//    };
//}
//
//int main(){
//    //const auto [success, contents, length] = read_text_file("README.txt");
//    if(const auto [success, contents, length] = read_text_file("README.txt");success){
//        printf("Read %zd bytes:%s\n", length, contents);
//    }
//    else{
//        printf("Failed to open README.txt.");
//    }
//}
