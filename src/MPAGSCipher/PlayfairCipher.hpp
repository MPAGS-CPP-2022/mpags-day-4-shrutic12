#ifndef MPAGSCIPHER_PLAYFAIRCIPHER_HPP
#define MPAGSCIPHER_PLAYFAIRCIPHER_HPP
#include "CipherMode.hpp"

#include <cstddef>
#include <string>
#include <vector>
#include <algorithm>

/**
 * \file PlayfairCipher.hpp
 * \brief Contains the declaration of the PlayfairCipher class
 */

/**
 * \class PlayfairCipher
 * \brief Encrypt or decrypt text using the CaesarPlayfair cipher with the given key
 */
class PlayfairCipher {
  public:
    /**
     * \brief Create a new PlayfairCipher with the given key
     *
     * \param key the key to use in the cipher
     */
    /**
     * \brief Create a new CaesarCipher, converting the given string into the key
     *
     * \param key the string to convert into the key to be used in the cipher
     */
        explicit PlayfairCipher(const std::string& key);


        void setKey(const std::string& key);
    /**
     * \brief Apply the cipher to the provided text
     *
     * \param inputText the text to encrypt or decrypt
     * \param cipherMode whether to encrypt or decrypt the input text
     * \return the result of applying the cipher to the input text
     */

        std::string applyCipher(const std::string& inputText,const CipherMode cipherMode) const;
    private:
        std::string key_{""};
 
};

#endif