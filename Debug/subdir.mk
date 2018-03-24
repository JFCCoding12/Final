################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Consolecolor.cpp \
../Hunting.cpp \
../MovementLogic.cpp \
../game.cpp \
../main.cpp \
../shop.cpp 

OBJS += \
./Consolecolor.o \
./Hunting.o \
./MovementLogic.o \
./game.o \
./main.o \
./shop.o 

CPP_DEPS += \
./Consolecolor.d \
./Hunting.d \
./MovementLogic.d \
./game.d \
./main.d \
./shop.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


