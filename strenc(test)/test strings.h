#ifndef TEST_STRINGS_KEY
	#define TEST_STRINGS_KEY "X3Ejh0Sznk7GCbyVNH/MRfPQIFtZq4BOloc9ruA+ea6J5d2DLgs1vUwYm8TxWKpi"
	#define INTRO_STRING GetDecryptedString("fSoaqs3aqs3onzHuqYNlZwIlqYHsFP897ErX")
	#define SECOND_STRING GetDecryptedString("/SKYkYCltQNl4wKstwu2F1WX")
	#define THIRD_STRING GetDecryptedString("4Sf14Su2FsXcqQfD4Sf1nc3cqAW2XX==")
	#define LONG_STRING GetDecryptedString("RUH3RuHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwHrqw0AqwHAqwH0MrNX")
	#pragma comment(lib, "strenc")
	void StrencDecode(char* buffer, char* Base64CharacterMap);
	const char* GetDecryptedString(const char* encryptedString)
	{
		static char string[1429];
		strcpy(string, encryptedString);
		StrencDecode(string, TEST_STRINGS_KEY);
		return string;
	}
#endif