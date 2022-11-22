#include "PlayfairCipher.hpp"
#include "CipherMode.hpp"
#include <iostream>
#include <string>
#include <algorithm>

PlayfairCipher::PlayfairCipher(const std::string& key) 
{
    setKey(key);
}
void PlayfairCipher::setKey(const std::string& key){
    //Store the original key that is given
    key_ = key;
    //Append the alphabet
    key_+="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //Make sure the key is upper case
    std::transform(key_.begin(),key_.end(),key_.begin(),::toupper);

    //Remove non-alpha characters
    auto func =[](char val){
        if (std::isalpha(val)){
            return false;
        }
        else
            return true;
    };
    auto iter = std::remove_if(key_.begin(),key_.end(),func);
    key_.erase(iter,key_.end());
    std::cout<<key_<<std::endl;
}
std::string PlayfairCipher::applyCipher(const std::string& inputText, const CipherMode /*cipherMode*/ ) const{
    std::cout<<"Not yet implemented";
    return inputText;
}