################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/crc64_ecma.cpp \
../src/json_cbor_xml.cpp \
../src/libusblpm.cpp \
../src/main.cpp \
../src/offsets.cpp 

OBJS += \
./src/crc64_ecma.o \
./src/json_cbor_xml.o \
./src/libusblpm.o \
./src/main.o \
./src/offsets.o 

CPP_DEPS += \
./src/crc64_ecma.d \
./src/json_cbor_xml.d \
./src/libusblpm.d \
./src/main.d \
./src/offsets.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -I"C:\Users\vkuzmenko\workspace\params\inc\libusb-1.0.21\include\libusb-1.0" -I"C:\Users\vkuzmenko\workspace\params\inc" -O3 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


