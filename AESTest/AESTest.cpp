// AESTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "AES.hpp"

int main()
{
    std::cout << "Hello World!\n";


	AES aes128(128);
	AES aes192(192);
	AES aes256(256);

	//std::string plainText = "3243F6A8885A308D313198A2E0370734";
	std::string plainText = "111E1111111111111111111111111111";

	std::cout << "size: " << plainText.length() << std::endl;

	std::string cipherKey = "2B7E151628AED2A6ABF7158809CF4F3C";

	std::cout << "Input : " << plainText << std::endl;
	std::string cipherText = aes128.encryption(plainText, cipherKey, true);
	std::cout << "Cipher : " << cipherText << std::endl;
	std::string origin = aes128.decryption(cipherText, cipherKey, true);
	std::cout << "origin : " << origin << std::endl;



	/*
	plainText = "014BAF2278A69D331D5180103643E99A";
	cipherKey = "E8E9EAEBEDEEEFF0F2F3F4F5F7F8F9FA";

	std::cout << "Input : " << plainText << std::endl;
	cipherText = aes128.encryption(plainText, cipherKey);
	std::cout << "Cipher : " << cipherText << std::endl;
	origin = aes128.decryption(cipherText, cipherKey);
	std::cout << "origin : " << origin << std::endl;

	plainText = "76777475F1F2F3F4F8F9E6E777707172";
	cipherKey = "04050607090A0B0C0E0F10111314151618191A1B1D1E1F20";

	std::cout << "\nInput : " << plainText << std::endl;
	cipherText = aes192.encryption(plainText, cipherKey);
	std::cout << "Cipher : " << cipherText << std::endl;
	origin = aes192.decryption(cipherText, cipherKey);
	std::cout << "origin : " << origin << std::endl;

	plainText = "069A007FC76A459F98BAF917FEDF9521";
	cipherKey = "08090A0B0D0E0F10121314151718191A1C1D1E1F21222324262728292B2C2D2E";

	std::cout << "\nInput : " << plainText << std::endl;
	cipherText = aes256.encryption(plainText, cipherKey);
	std::cout << "Cipher : " << cipherText << std::endl;
	origin = aes256.decryption(cipherText, cipherKey);
	std::cout << "origin : " << origin << std::endl;

	//aes128.setIV(time(NULL));
	std::cout << "\n AES/128/ECB mode\n";
	std::string str = "The current fire house installed within the building used by South Korea's agency for managing the industrial zone will move to the newly built three-story building, the official said.";
	std::string hexStr = aes128.convertStrToHexStr(str);
	cipherKey = "ABCDEFGHIJKLMNOP";
	cipherKey = aes128.convertStrToHexStr(cipherKey);
	std::cout << "Input(Str) : " << str << std::endl;
	std::cout << "Input(Hex) : " << hexStr << std::endl;
	cipherText = aes128.encryption(hexStr, cipherKey);
	std::cout << "Cipher : " << cipherText << std::endl;
	origin = aes128.decryption(cipherText, cipherKey);
	std::cout << "Output(Hex) : " << origin << std::endl;
	std::cout << "Output(Str) : " << aes128.convertHexStrToStr(origin) << std::endl;

	std::cout << "\n AES/128/CBC mode\n";
	AES aes128_CBC(128, MODE::CBC);
	std::cout << "Input(Str) : " << str << std::endl;
	std::cout << "Input(Hex) : " << hexStr << std::endl;
	cipherText = aes128_CBC.encryption(hexStr, cipherKey);
	std::cout << "Cipher : " << cipherText << std::endl;
	origin = aes128_CBC.decryption(cipherText, cipherKey);

	std::cout << "Output(Hex) : " << origin << std::endl;
	std::cout << "Output(Str) : " << aes128.convertHexStrToStr(origin) << std::endl;


	*/
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
