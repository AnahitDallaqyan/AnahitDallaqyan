#include <iostream>
class string {
		private:
				char* data;
				size_t capacity;
				size_t length;
		public:
				string() {
						data = new char[0];
						capacity = 1;
						length = 0;
				}
				string(const string& str) {
						length = str.length;
						capacity = str.capacity;
						data = new char[capacity];
				}
				string(const char* s) {
						length = 0;
						while (s[length] != '\0') {
								length++;
						}
						capacity = length + 1;
						data = new char[capacity];
						for (size_t i = 0; i < capacity; i++) {
								data[i] = s[i];
						}
				}
				string(const char* s, size_t n) {
						length = n;
						capacity = length + 1;
						data = new char[capacity];
						for (size_t i = 0; i < n; i++) {
								data[i] = s[i];
						}
						data[n] = '\0';
				}
				string(size_t n, char c) {
						length = n;
						capacity = length + 1;
						data = new char[capacity];
						for (size_t i = 0; i < n; ++i) {
								data[i] = c;
						}
						data[n] = '\0';
				}
				~string() {
						delete[] data;
				}
				size_t Length() {
						return length;
				}
				size_t Capacity() {
						return capacity;
				}
				string Clear() {
						delete[] data;
						data = new char[1];
						data[0] = '\0';
						capacity = 1;
						length = 0;
						return data;
				}
				string Empty()  {
						if( 0 == length){
								std::cout << "The string is empty!" << "\n";
						}
						else {
								std::cout << "The length of string is " << length << "\n";
						}
						return data;
				}
				const char* Data() {
						return data;
				}
				char& operator[](size_t index) {
						if (index >= length) {
								std::cout << "Index out of range";
						}
						return data[index];
				}
				string& operator+=(const string& str) {
						size_t new_Length = length + str.length;
						char* new_Data = new char[new_Length + 1];
						for (size_t i = 0; i < length; i++) {
								new_Data[i] = data[i];
						}
						for (size_t i = 0; i < str.length; i++) {
								new_Data[length + i] = str.data[i];
						}
						new_Data[new_Length] = '\0';
						delete[] data;
						data = new_Data;
						length = new_Length;
						capacity = new_Length + 1;
						return *this;
				}
				string& operator+=(char c) {
						size_t new_Length = length + 1;
						char* new_Data = new char[new_Length + 1];
						for (size_t i = 0; i < length; i++) {
								new_Data[i] = data[i];
						}
						new_Data[length] = c;
						new_Data[length + 1] = '\0';
						delete[] data;
						data = new_Data;
						length = new_Length;
						capacity = new_Length + 1;
						return *this;
				}
				string& operator+=(const char* s) {
						size_t s_Length = 0;
						while (s[s_Length] != '\0') {
								s_Length++;
						}
						size_t new_Length = length + s_Length;
						char* new_Data = new char[new_Length + 1];
						for (size_t i = 0; i < length; i++) {
								new_Data[i] = data[i];
						}
						for (size_t i = 0; i < s_Length; i++) {
								new_Data[length + i] = s[i];
						}
						new_Data[new_Length] = '\0';
						delete[] data;
						data = new_Data;
						length = new_Length;
						capacity = new_Length + 1;
						return *this;
				}
};
int main() {
		string str1 = "String1";
		std::cout << "Str1 = " << str1.Data() << "\n";
		std::cout << "Length =  " << str1.Length() << "\n";
		std::cout << "Capacity = " << str1.Capacity() << "\n";
		std::cout << "First symbol =" << str1 [0] << "\n";
		string str2 = " String2";
		std::cout << "Str1 =  " << str2.Data() << "\n";
		str1 += str2;
		std::cout << "Str1 + Str2 = " << str1.Data() << "\n";
		str1.Clear();
		str1.Data();
		string str_empty = str1.Empty();
		string str3 = "String3";
		std::cout << "Str3 =  " << str3.Data() << "\n";
		str3 += '&';
		std::cout << "Str3 + '&' = " << str3.Data() << "\n";
		string str4 = " String4";
		std::cout << "Str4 =  " << str4.Data() << "\n";
		str4 += " String5";
		std::cout << "Str4 + str5 = " << str4.Data() << "\n";
		return 0;
}
