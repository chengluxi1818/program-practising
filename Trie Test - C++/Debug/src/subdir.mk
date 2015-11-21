################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Trie\ Test\ -\ C++.cpp \
../src/Trie.cpp 

OBJS += \
./src/Trie\ Test\ -\ C++.o \
./src/Trie.o 

CPP_DEPS += \
./src/Trie\ Test\ -\ C++.d \
./src/Trie.d 


# Each subdirectory must supply rules for building sources it contributes
src/Trie\ Test\ -\ C++.o: ../src/Trie\ Test\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Trie Test - C++.d" -MT"src/Trie\ Test\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


