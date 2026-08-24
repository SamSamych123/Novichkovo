#if !defined(NOVICHKOVO_H)
#define NOVICHKOVO_H

#if defined(use_lib_system_h)
  #include "system.h"
#else
  #include <stdio.h>
  #include <stdint.h>
  #include <stdlib.h>
#endif



typedef LETTER char // Example: LETTER letter = 'a' '''or''' LETTER string[100]
typedef STRING char* // Example: STRING string = "This string is a example" '''or''' STRING string = MAKE_AND_NULL_DYNAMIC_MASSIVE(100, sizeof(LETTER))

typedef SIGNED_1BYTE int8_t // Example: SIGNED_1BYTE number = 0
typedef UNSIGNED_1BYTE uint8_t // Example: UNSIGNED_1BYTE number = 0

typedef SIGNED_2BYTE int16_t // Example: SIGNED_2BYTE number = 0
typedef UNSIGNED_2BYTE uint16_t // Example: UNSIGNED_2BYTE number = 0

typedef SIGNED__4BYTE int32_t // Example: SIGNED_4BYTE number = 0
typedef UNSIGNED__4BYTE uint32_t // Example: UNSIGNED_1BYTE number = 0

typedef SIGNED_8BYTE int64_t // Example: SIGNED_8BYTE number = 0
typedef UNSIGNED_8BYTE uint64_t // Example: UNSIGNED_8BYTE number = 0


typedef CONSTANT_LETTER const char // Example: CONSTANT_LETTER letter = 'a' '''or''' CONSTANT_LETTER string[100]
typedef CONSTANT_STRING const char* // Example: CONSTANT_STRING string = "This string is a example"

typedef CONSTANT_SIGNED_1BYTE const int8_t // Example: CONSTANT_SIGNED_1BYTE number = 5
typedef CONSTANT_UNSIGNED_1BYTE const uint8_t // Example: CONSTANT_UNSIGNED_1BYTE number = 5

typedef CONSTANT_SIGNED_2BYTE const int16_t // Example: CONSTANT_SIGNED_2BYTE number = 5
typedef CONSTANT_UNSIGNED_2BYTE const uint16_t // Example: CONSTANT_UNSIGNED_2BYTE number = 5

typedef CONSTANT_SIGNED_4BYTE const int32_t // Example: CONSTANT_SIGNED_4BYTE number = 5
typedef CONSTANT_UNSIGNED_4BYTE const uint32_t // Example: CONSTANT_UNSIGNED_4BYTE number = 5

typedef CONSTANT_SIGNED_8BYTE const int64_t // Example: CONSTANT_SIGNED_8BYTE number = 5
typedef CONSTANT_UNSIGNED_8BYTE const uint64_t // Example: CONSTANT_UNSIGNED_8BYTE number = 5



#define PRINT_STRING puts // Example: PRINT_STRING("Example");
//#define PRINT_NUMBER print_number // Example: PRINT_NUMBER(5);
#define PRINT_NUMBER printf // Example: PRINT_NUMBER("%d\n", 5);
#if defined(use_lib_system_h)
  #define PRINT_WITH_COLOR print_in_color // Example: PRINT_WITH_COLOR("Example\n", RED);
#endif

#if defined(use_lib_system_h)
  #define INPUT_STRING input // Example: INPUT_STRING(massive, 5); or INPUT_STRING(massive, sizeof(massive));
#else
  #define INPUT_STRING fgets // Example: INPUT_STRING(massive, 5, stdin); or INPUT_STRING(massive, sizeof(massive), stdin);0
#endif//#define INPUT_NUMBER input_number // Example: INPUT_NUMBER(varible);
#define INPUT_NUMBER scanf // Example: INPUT_NUMBER("%d", varible);

#define EXIT_PROGRAM exit



#define MAKE_DYNAMIC_ARRAY malloc // Example: STRING string = MAKE_DYNAMIC_ARRAY(5 * sizeof(LETTER))
#define MAKE_AND_NULL_DYNAMIC_ARRAY calloc // Example: STRING string = MAKE_AND_NULL_DYNAMIC_ARRAY(5, sizeof(LETTER))
#define WIDEN_DYNAMIC_ARRAY realloc // Example: STRING new_string = WIDEN_DYNAMIC_ARRAY(string, 5 * sizeof(LETTER))
#define CLOSE_DYNAMIC_ARRAY free // Example: CLOSE_DYNAMIC_MASSIVE(string)



#define MAKE_FUNCTION_TO_NOT_RETURN void // Example: MAKE_FUNCTION_TO_NOT_RETURN function(void) { return; }
#define MAKE_FUNCTION_TO_RETURN_UNSIGNED_1BYTE UNSIGNED_1BYTE // Example: MAKE_FUNCTION_TO_RETURN_UNSIGNED_1BYTE function(void) { return 0; }
#define MAKE_FUNCTION_TO_RETURN_UNSIGNED_2BYTE UNSIGNED_2BYTE // Example: MAKE_FUNCTION_TO_RETURN_UNSIGNED_2BYTE function(void) { return 0; }
#define MAKE_FUNCTION_TO_RETURN_UNSIGNED_4BYTE UNSIGNED_4BYTE // Example: MAKE_FUNCTION_TO_RETURN_UNSIGNED_4BYTE function(void) { return 0; }
#define MAKE_FUNCTION_TO_RETURN_UNSIGNED_8BYTE UNSIGNED_8BYTE // Example: MAKE_FUNCTION_TO_RETURN_UNSIGNED_8BYTE function(void) { return 0; }
#define MAKE_FUNCTION_TO_RETURN_LETTER LETTER
#define MAKE_FUNCTION_TO_RETURN_STRING STRING

#define MAIN_AND_RETURN int main // Example: MAIN_AND_RETURN(void) { PRINT_STRING("Hello, world!"); return 0; }
#define MAIN_AND_NOT_RETURN void main // Example: MAIN_AND_NOT_RETURN(void) { PRINT_STRING("Hello, world!"); EXIT_PROGRAM; }



#endif
