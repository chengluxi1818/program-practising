################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Abstract\ Classes\ -\ C++.cpp \
../src/Shape.cpp 

OBJS += \
./src/Abstract\ Classes\ -\ C++.o \
./src/Shape.o 

CPP_DEPS += \
./src/Abstract\ Classes\ -\ C++.d \
./src/Shape.d 


# Each subdirectory must supply rules for building sources it contributes
src/Abstract\ Classes\ -\ C++.o: ../src/Abstract\ Classes\ -\ C++.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Abstract Classes - C++.d" -MT"src/Abstract\ Classes\ -\ C++.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


