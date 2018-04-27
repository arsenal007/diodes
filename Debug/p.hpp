#ifndef LPM_PARAMETERS_
 #define LPM_PARAMETERS_
 namespace Firmware {
 namespace System  {
 namespace Parameters  {
 extern const char _parameters_piercing_lasers_IPG4000_processes_ms_o2_1s_f_name[];
extern const char _parameters_piercing_lasers_IPG4000_processes_ss_o2_1s_f_name[];
extern const char _parameters_piercing_lasers_IPG4000_processes_ss_n2_1s_f_name[];
extern const char _parameters_piercing_lasers_IPG2000_processes_a_n2_1s_f_name[];
extern const char _parameters_piercing_lasers_IPG4000_processes_c_o2_1s_f_name[];
extern const char _parameters_piercing_lasers_IPG4000_processes_b_n2_1s_f_name[];
extern const char _parameters_piercing_lasers_IPG4000_processes_ms_o2_1s_hq_name[];
extern const char _parameters_piercing_lasers_IPG4000_processes_ss_n2_1s_hq_name[];
extern const char _parameters_piercing_lasers_IPG2000_processes_a_n2_1s_hq_name[];
struct T_wparameters { struct T_piercing { struct T_lasers { struct T_IPG2000 { struct T_processes { struct T_a_n2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_a_n2_1s_f  a_n2_1s_f;
struct T_a_n2_1s_hq { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_a_n2_1s_hq  a_n2_1s_hq;
struct T_b_n2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_b_n2_1s_f  b_n2_1s_f;
struct T_c_o2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_c_o2_1s_f  c_o2_1s_f;
struct T_ms_o2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ms_o2_1s_f  ms_o2_1s_f;
struct T_ms_o2_1s_hq { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ms_o2_1s_hq  ms_o2_1s_hq;
struct T_ss_n2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ss_n2_1s_f  ss_n2_1s_f;
struct T_ss_n2_1s_hq { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ss_n2_1s_hq  ss_n2_1s_hq;
struct T_ss_o2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ss_o2_1s_f  ss_o2_1s_f;
 } __attribute__( ( packed ) );T_processes  processes;
 } __attribute__( ( packed ) );T_IPG2000  IPG2000;
struct T_IPG3000 { struct T_processes { struct T_a_n2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_a_n2_1s_f  a_n2_1s_f;
struct T_a_n2_1s_hq { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_a_n2_1s_hq  a_n2_1s_hq;
struct T_b_n2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_b_n2_1s_f  b_n2_1s_f;
struct T_c_o2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_c_o2_1s_f  c_o2_1s_f;
struct T_ms_o2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ms_o2_1s_f  ms_o2_1s_f;
struct T_ms_o2_1s_hq { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ms_o2_1s_hq  ms_o2_1s_hq;
struct T_ss_n2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ss_n2_1s_f  ss_n2_1s_f;
struct T_ss_n2_1s_hq { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ss_n2_1s_hq  ss_n2_1s_hq;
struct T_ss_o2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ss_o2_1s_f  ss_o2_1s_f;
 } __attribute__( ( packed ) );T_processes  processes;
 } __attribute__( ( packed ) );T_IPG3000  IPG3000;
struct T_IPG4000 { struct T_processes { struct T_a_n2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_a_n2_1s_f  a_n2_1s_f;
struct T_a_n2_1s_hq { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_a_n2_1s_hq  a_n2_1s_hq;
struct T_b_n2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_b_n2_1s_f  b_n2_1s_f;
struct T_c_o2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_c_o2_1s_f  c_o2_1s_f;
struct T_ms_o2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ms_o2_1s_f  ms_o2_1s_f;
struct T_ms_o2_1s_hq { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ms_o2_1s_hq  ms_o2_1s_hq;
struct T_ss_n2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ss_n2_1s_f  ss_n2_1s_f;
struct T_ss_n2_1s_hq { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ss_n2_1s_hq  ss_n2_1s_hq;
struct T_ss_o2_1s_f { struct T_p_max_puls_increment {
float w_value;
} __attribute__( ( packed ) );
T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
int32_t w_value;
} __attribute__( ( packed ) );
T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
int32_t w_value[5];
} __attribute__( ( packed ) );
T_p_puls_length  p_puls_length;
 } __attribute__( ( packed ) );T_ss_o2_1s_f  ss_o2_1s_f;
 } __attribute__( ( packed ) );T_processes  processes;
 } __attribute__( ( packed ) );T_IPG4000  IPG4000;
 } __attribute__( ( packed ) );T_lasers  lasers;
struct T_piercing_channel {
int32_t w_value;
} __attribute__( ( packed ) );
T_piercing_channel  piercing_channel;
 } __attribute__( ( packed ) );T_piercing  piercing;
 } __attribute__( ( packed ) );extern T_wparameters  wparameters;
struct T_parameters {
struct T_piercing {
struct T_lasers {
struct T_IPG2000 {
struct T_processes {
struct T_a_n2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG2000_processes_a_n2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.1;
float* const w_value = &wparameters.piercing.lasers.IPG2000.processes.a_n2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG2000.processes.a_n2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG2000.processes.a_n2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_a_n2_1s_f  a_n2_1s_f;
struct T_a_n2_1s_hq {
const char * const name = _parameters_piercing_lasers_IPG2000_processes_a_n2_1s_hq_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.1f;
float* const w_value = &wparameters.piercing.lasers.IPG2000.processes.a_n2_1s_hq.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG2000.processes.a_n2_1s_hq.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG2000.processes.a_n2_1s_hq.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_a_n2_1s_hq  a_n2_1s_hq;
struct T_b_n2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_b_n2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG2000.processes.b_n2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG2000.processes.b_n2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG2000.processes.b_n2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_b_n2_1s_f  b_n2_1s_f;
struct T_c_o2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_c_o2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG2000.processes.c_o2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG2000.processes.c_o2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG2000.processes.c_o2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_c_o2_1s_f  c_o2_1s_f;
struct T_ms_o2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ms_o2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.005f;
float* const w_value = &wparameters.piercing.lasers.IPG2000.processes.ms_o2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG2000.processes.ms_o2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 5, 5, 5, 12, 20};
int32_t* const w_value = wparameters.piercing.lasers.IPG2000.processes.ms_o2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ms_o2_1s_f  ms_o2_1s_f;
struct T_ms_o2_1s_hq {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ms_o2_1s_hq_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.005f;
float* const w_value = &wparameters.piercing.lasers.IPG2000.processes.ms_o2_1s_hq.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG2000.processes.ms_o2_1s_hq.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 5, 5, 5, 12, 20};
int32_t* const w_value = wparameters.piercing.lasers.IPG2000.processes.ms_o2_1s_hq.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ms_o2_1s_hq  ms_o2_1s_hq;
struct T_ss_n2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ss_n2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG2000.processes.ss_n2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG2000.processes.ss_n2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG2000.processes.ss_n2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ss_n2_1s_f  ss_n2_1s_f;
struct T_ss_n2_1s_hq {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ss_n2_1s_hq_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG2000.processes.ss_n2_1s_hq.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG2000.processes.ss_n2_1s_hq.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG2000.processes.ss_n2_1s_hq.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ss_n2_1s_hq  ss_n2_1s_hq;
struct T_ss_o2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ss_o2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG2000.processes.ss_o2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG2000.processes.ss_o2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG2000.processes.ss_o2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ss_o2_1s_f  ss_o2_1s_f;
 
} __attribute__( ( packed ) );const T_processes  processes;
 
} __attribute__( ( packed ) );const T_IPG2000  IPG2000;
struct T_IPG3000 {
struct T_processes {
struct T_a_n2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG2000_processes_a_n2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.1f;
float* const w_value = &wparameters.piercing.lasers.IPG3000.processes.a_n2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG3000.processes.a_n2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG3000.processes.a_n2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_a_n2_1s_f  a_n2_1s_f;
struct T_a_n2_1s_hq {
const char * const name = _parameters_piercing_lasers_IPG2000_processes_a_n2_1s_hq_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.1f;
float* const w_value = &wparameters.piercing.lasers.IPG3000.processes.a_n2_1s_hq.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG3000.processes.a_n2_1s_hq.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG3000.processes.a_n2_1s_hq.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_a_n2_1s_hq  a_n2_1s_hq;
struct T_b_n2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_b_n2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG3000.processes.b_n2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG3000.processes.b_n2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG3000.processes.b_n2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_b_n2_1s_f  b_n2_1s_f;
struct T_c_o2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_c_o2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG3000.processes.c_o2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG3000.processes.c_o2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG3000.processes.c_o2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_c_o2_1s_f  c_o2_1s_f;
struct T_ms_o2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ms_o2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.005f;
float* const w_value = &wparameters.piercing.lasers.IPG3000.processes.ms_o2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG3000.processes.ms_o2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 5, 5, 5, 12, 12};
int32_t* const w_value = wparameters.piercing.lasers.IPG3000.processes.ms_o2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ms_o2_1s_f  ms_o2_1s_f;
struct T_ms_o2_1s_hq {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ms_o2_1s_hq_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.005f;
float* const w_value = &wparameters.piercing.lasers.IPG3000.processes.ms_o2_1s_hq.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG3000.processes.ms_o2_1s_hq.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 5, 5, 5, 12, 12};
int32_t* const w_value = wparameters.piercing.lasers.IPG3000.processes.ms_o2_1s_hq.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ms_o2_1s_hq  ms_o2_1s_hq;
struct T_ss_n2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ss_n2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG3000.processes.ss_n2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG3000.processes.ss_n2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG3000.processes.ss_n2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ss_n2_1s_f  ss_n2_1s_f;
struct T_ss_n2_1s_hq {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ss_n2_1s_hq_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG3000.processes.ss_n2_1s_hq.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG3000.processes.ss_n2_1s_hq.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG3000.processes.ss_n2_1s_hq.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ss_n2_1s_hq  ss_n2_1s_hq;
struct T_ss_o2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ss_o2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG3000.processes.ss_o2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG3000.processes.ss_o2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG3000.processes.ss_o2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ss_o2_1s_f  ss_o2_1s_f;
 
} __attribute__( ( packed ) );const T_processes  processes;
 
} __attribute__( ( packed ) );const T_IPG3000  IPG3000;
struct T_IPG4000 {
struct T_processes {
struct T_a_n2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG2000_processes_a_n2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.1f;
float* const w_value = &wparameters.piercing.lasers.IPG4000.processes.a_n2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG4000.processes.a_n2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 3, 4, 8, 8, 8};
int32_t* const w_value = wparameters.piercing.lasers.IPG4000.processes.a_n2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_a_n2_1s_f  a_n2_1s_f;
struct T_a_n2_1s_hq {
const char * const name = _parameters_piercing_lasers_IPG2000_processes_a_n2_1s_hq_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.1f;
float* const w_value = &wparameters.piercing.lasers.IPG4000.processes.a_n2_1s_hq.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG4000.processes.a_n2_1s_hq.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 3, 4, 8, 8, 8};
int32_t* const w_value = wparameters.piercing.lasers.IPG4000.processes.a_n2_1s_hq.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_a_n2_1s_hq  a_n2_1s_hq;
struct T_b_n2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_b_n2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG4000.processes.b_n2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG4000.processes.b_n2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG4000.processes.b_n2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_b_n2_1s_f  b_n2_1s_f;
struct T_c_o2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_c_o2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG4000.processes.c_o2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG4000.processes.c_o2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 4, 4, 4, 4};
int32_t* const w_value = wparameters.piercing.lasers.IPG4000.processes.c_o2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_c_o2_1s_f  c_o2_1s_f;
struct T_ms_o2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ms_o2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.005f;
float* const w_value = &wparameters.piercing.lasers.IPG4000.processes.ms_o2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG4000.processes.ms_o2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 6, 8, 8, 8};
int32_t* const w_value = wparameters.piercing.lasers.IPG4000.processes.ms_o2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ms_o2_1s_f  ms_o2_1s_f;
struct T_ms_o2_1s_hq {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ms_o2_1s_hq_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.005f;
float* const w_value = &wparameters.piercing.lasers.IPG4000.processes.ms_o2_1s_hq.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG4000.processes.ms_o2_1s_hq.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 4, 6, 8, 8, 8};
int32_t* const w_value = wparameters.piercing.lasers.IPG4000.processes.ms_o2_1s_hq.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ms_o2_1s_hq  ms_o2_1s_hq;
struct T_ss_n2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ss_n2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG4000.processes.ss_n2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG4000.processes.ss_n2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 3, 4, 6, 6, 6};
int32_t* const w_value = wparameters.piercing.lasers.IPG4000.processes.ss_n2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ss_n2_1s_f  ss_n2_1s_f;
struct T_ss_n2_1s_hq {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ss_n2_1s_hq_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG4000.processes.ss_n2_1s_hq.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG4000.processes.ss_n2_1s_hq.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 3, 4, 6, 6, 6};
int32_t* const w_value = wparameters.piercing.lasers.IPG4000.processes.ss_n2_1s_hq.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ss_n2_1s_hq  ss_n2_1s_hq;
struct T_ss_o2_1s_f {
const char * const name = _parameters_piercing_lasers_IPG4000_processes_ss_o2_1s_f_name;
struct T_p_max_puls_increment {
const char access = 'W';
const float value = 0.05f;
float* const w_value = &wparameters.piercing.lasers.IPG4000.processes.ss_o2_1s_f.p_max_puls_increment.w_value;
 
} __attribute__( ( packed ) );
const T_p_max_puls_increment  p_max_puls_increment;
struct T_p_piercing_class {
const char access = 'W';
const int32_t value = 0;
int32_t* const w_value = &wparameters.piercing.lasers.IPG4000.processes.ss_o2_1s_f.p_piercing_class.w_value;
 
} __attribute__( ( packed ) );
const T_p_piercing_class  p_piercing_class;
struct T_p_puls_length {
const char access = 'W';
const int32_t value[5] = { 3, 4, 6, 6, 6};
int32_t* const w_value = wparameters.piercing.lasers.IPG4000.processes.ss_o2_1s_f.p_puls_length.w_value;
 
} __attribute__( ( packed ) );
const T_p_puls_length  p_puls_length;
 
} __attribute__( ( packed ) );const T_ss_o2_1s_f  ss_o2_1s_f;
 
} __attribute__( ( packed ) );const T_processes  processes;
 
} __attribute__( ( packed ) );const T_IPG4000  IPG4000;
 
} __attribute__( ( packed ) );const T_lasers  lasers;
struct T_piercing_channel {
const char access = 'W';
const int32_t value = 1;
int32_t* const w_value = &wparameters.piercing.piercing_channel.w_value;
 
} __attribute__( ( packed ) );
const T_piercing_channel  piercing_channel;
 
} __attribute__( ( packed ) );const T_piercing  piercing;
 
} __attribute__( ( packed ) );extern const T_parameters  parameters;
}}}
 #endif