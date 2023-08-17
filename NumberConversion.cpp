#include "NumberConversion.hpp"

std::string toBin(uint32_t decimalNumber)
{
	// Implement
 
	std::string bin = "";
	if(decimalNumber == 0) return "0";
	else {
		while (decimalNumber>0){
			int rest = decimalNumber % 2;
			bin = std::to_string(rest) + bin;
			decimalNumber/=2;
		}
		return bin;
	}
}

std::string toHex(uint32_t decimalNumber)
{
	// Implement
	std::string hex = "";
	if(decimalNumber == 0) return "0";
	else {
		while (decimalNumber>0){
			
			int rest = decimalNumber % 16;

			
			if(rest > 9){
				switch (rest)
				{
					case 10:
						hex = "A" + hex;
						break;
					case 11:
						hex = "B" + hex;
						break;
					case 12:
						hex = "C" + hex;
						break;
					case 13:
						hex = "D" + hex;
						break;

					case 14:
						hex = "E" + hex;
						break;
					case 15:
						hex = "F" + hex;
						break;		
				}
			}
			else{
				hex = std::to_string(rest) + hex;
			}
			decimalNumber/=16;
		}
		return hex;
	}
	
}

std::string toBase(uint32_t decimalNumber, uint32_t base)
{
	// Implement
	std::string result = "";
	int num[]={10, 11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,29,30,31};
	std::string chiffer[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	if(decimalNumber == 0) return "0";
	else {
		while (decimalNumber>0){
			
			int rest = decimalNumber % base;

			
			if(rest > 9){
				for (size_t i = 0; i < base-1; i++)
				{
					/* code */
					if(rest==num[i]) result = chiffer[i] + result;
				}
				
			}
			else{
				result = std::to_string(rest) + result;
			}
			decimalNumber/=base;
		}
		return result;
	}
	
}