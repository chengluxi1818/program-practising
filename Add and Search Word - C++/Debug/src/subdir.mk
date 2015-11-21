################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Add\ and\ Search\ Word\ -\ C++.cpp \
../src/WordDictionary.cpp 

OBJS += \
./src/Add\ and\ Search\ Word\ -\ C++.o \
./src/WordDictionary.o 

CPP_DEPS += \
./src/Add\ and\ Search\ Word\ -\ C++.d \
./src/WordDictionary.d 


# Each subdirectory must supply rules for building sources it contributes
src/Add\ and\ Search\ Word\ -\ C++.o: ../src/Add\ and\ Search\ Word\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Add and Search Word - C++.d" -MT"src/Add\ and\ Search\ Word\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


