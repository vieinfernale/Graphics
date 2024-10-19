# Binary
- [Binary Numbers](https://en.wikipedia.org/wiki/Binary_number#Counting_in_binary)
- [Binary to Character](https://en.wikipedia.org/wiki/Binary-to-text_encoding)
- [BitWise Operators C++](https://learn.microsoft.com/en-us/cpp/cpp/bitwise-and-operator-amp)
- [Bit Vector (bit mask,map,set,string,array)]

# Data Type Ranges
|Type Name|Bytes|Other Names|Range of Values|
|---------------|-----------|-----------------|---------------------|
|**`int`**|4|**`signed`**|-2,147,483,648 to 2,147,483,647|
|**`unsigned int`**|4|**`unsigned`**|0 to 4,294,967,295|
|**`__int8`**|1|**`char`**|-128 to 127|
|**`unsigned __int8`**|1|**`unsigned char`**|0 to 255|
|**`__int16`**|2|**`short`**, **`short int`**, **`signed short int`**|-32,768 to 32,767|
|**`unsigned __int16`**|2|**`unsigned short`**, **`unsigned short int`**|0 to 65,535|
|**`__int32`**|4|**`signed`**, **`signed int`**, **`int`**|-2,147,483,648 to 2,147,483,647|
|**`unsigned __int32`**|4|**`unsigned`**, **`unsigned int`**|0 to 4,294,967,295|
|**`__int64`**|8|**`long long`**, **`signed long long`**|-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807|
|**`unsigned __int64`**|8|**`unsigned long long`**|0 to 18,446,744,073,709,551,615|
|**`bool`**|1|none|**`false`** or **`true`**|
|**`char`**|1|none|-128 to 127 by default<br /><br /> 0 to 255 when compiled by using [`/J`](../build/reference/j-default-char-type-is-unsigned.md)|
|**`signed char`**|1|none|-128 to 127|
|**`unsigned char`**|1|none|0 to 255|
|**`short`**|2|**`short int`**, **`signed short int`**|-32,768 to 32,767|
|**`unsigned short`**|2|**`unsigned short int`**|0 to 65,535|
|**`long`**|4|**`long int`**, **`signed long int`**|-2,147,483,648 to 2,147,483,647|
|**`unsigned long`**|4|**`unsigned long int`**|0 to 4,294,967,295|
|**`long long`**|8|none (but equivalent to **`__int64`**)|-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807|
|**`unsigned long long`**|8|none (but equivalent to **`unsigned __int64`**)|0 to 18,446,744,073,709,551,615|
|**`enum`**|varies|none| |
|**`float`**|4|none|3.4E +/- 38 (7 digits)|
|**`double`**|8|none|1.7E +/- 308 (15 digits)|
|**`long double`**|same as **`double`**|none|Same as **`double`**|
|**`wchar_t`**|2|**`__wchar_t`**|0 to 65,535|



# Integer Limits

| Constant | Meaning | Value |
|--|--|--|
| `CHAR_BIT` | Number of bits in the smallest variable that is not a bit field. | 8 |
| `SCHAR_MIN` | Minimum value for a variable of type **`signed char`**. | -128 |
| `SCHAR_MAX` | Maximum value for a variable of type **`signed char`**. | 127 |
| `UCHAR_MAX` | Maximum value for a variable of type **`unsigned char`**. | 255 (0xff) |
| `CHAR_MIN` | Minimum value for a variable of type **`char`**. | -128; 0 if **`/J`** option used |
| `CHAR_MAX` | Maximum value for a variable of type **`char`**. | 127; 255 if **`/J`** option used |
| `MB_LEN_MAX` | Maximum number of bytes in a multicharacter constant. | 5 |
| `SHRT_MIN` | Minimum value for a variable of type **`short`**. | -32768 |
| `SHRT_MAX` | Maximum value for a variable of type **`short`**. | 32767 |
| `USHRT_MAX` | Maximum value for a variable of type **`unsigned short`**. | 65535 (0xffff) |
| `INT_MIN` | Minimum value for a variable of type **`int`**. | -2147483648 |
| `INT_MAX` | Maximum value for a variable of type **`int`**. | 2147483647 |
| `UINT_MAX` | Maximum value for a variable of type **`unsigned int`**. | 4294967295 (0xffffffff) |
| `LONG_MIN` | Minimum value for a variable of type **`long`**. | -2147483648 |
| `LONG_MAX` | Maximum value for a variable of type **`long`**. | 2147483647 |
| `ULONG_MAX` | Maximum value for a variable of type **`unsigned long`**. | 4294967295 (0xffffffff) |
| `LLONG_MIN` | Minimum value for a variable of type **`long long`** | -9223372036854775808 |
| `LLONG_MAX` | Maximum value for a variable of type **`long long`** | 9223372036854775807 |
| `ULLONG_MAX` | Maximum value for a variable of type **`unsigned long long`** | 18446744073709551615 (0xffffffffffffffff) |