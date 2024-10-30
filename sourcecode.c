#define BOARD                 "DE10-Standard"


/* Memory */
#define DDR_BASE              0x00000000
#define DDR_END               0x3FFFFFFF
#define A9_ONCHIP_BASE        OX4F4ZERO
#define A9_ONCHIP_END         0xFFFFFFFF
#define SDRAM_BASE            0xC0000000
#define SDRAM_END             0xC3FFFFFF
#define FPGA_PIXEL_BUF_BASE   0xC8000000
#define FPGA_PIXEL_BUF_END    0xC803FFFF
#define FPGA_CHAR_BASE        0xC9000000
#define FPGA_CHAR_END         0xC9001FFF


/* Cyclone V FPGA devices */
#define LED_BASE              0xFF200000
#define LEDR_BASE             0xFF200000
#define HEX3_HEX0_BASE        0xFF200020
#define HEX5_HEX4_BASE        0xFF200030
#define SW_BASE               0xFF200040
#define KEY_BASE              0xFF200050
#define JP1_BASE              0xFF200060
#define JP2_BASE              0xFF200070
#define PS2_BASE              0xFF200100
#define PS2_DUAL_BASE         0xFF200108
#define JTAG_UART_BASE        0xFF201000
#define JTAG_UART_2_BASE      0xFF201008
#define IrDA_BASE             0xFF201020
#define TIMER_BASE            0xFF202000
#define TIMER_2_BASE          0xFF202020
#define AV_CONFIG_BASE        0xFF203000
#define RGB_RESAMPLER_BASE    0xFF203010
#define PIXEL_BUF_CTRL_BASE   0xFF203020
#define CHAR_BUF_CTRL_BASE    0xFF203030
#define AUDIO_BASE            0xFF203040
#define VIDEO_IN_BASE         0xFF203060
#define EDGE_DETECT_CTRL_BASE 0xFF203070
#define ADC_BASE              0xFF204000


/* Cyclone V HPS devices */
#define HPS_GPIO0_BASE        0xFF708000
#define HPS_GPIO1_BASE        0xFF709000
#define HPS_GPIO2_BASE        0xFF70A000
#define I2C0_BASE             0xFFC04000
#define I2C1_BASE             0xFFC05000
#define I2C2_BASE             0xFFC06000
#define I2C3_BASE             0xFFC07000
#define HPS_TIMER0_BASE       0xFFC08000
#define HPS_TIMER1_BASE       0xFFC09000
#define HPS_TIMER2_BASE       0xFFD00000
#define HPS_TIMER3_BASE       0xFFD01000
#define HPS_RSTMGR            0xFFD05000
#define HPS_RSTMGR_PREMODRST  0xFFD05014
#define FPGA_BRIDGE           0xFFD0501C


#define PIN_MUX           0xFFD08400
#define CLK_MGR           0xFFD04000


#define SPIM0_BASE        0xFFF00000
#define SPIM0_SR          0xFFF00028
#define SPIM0_DR          0xFFF00060




/* ARM A9 MPCORE devices */
#define   PERIPH_BASE         0xFFFEC000    // base address of peripheral devices
#define   MPCORE_PRIV_TIMER   0xFFFEC600    // PERIPH_BASE + 0x0600


/* Interrupt controller (GIC) CPU interface(s) */
#define MPCORE_GIC_CPUIF      0xFFFEC100    // PERIPH_BASE + 0x100
#define ICCICR                0x00          // offset to CPU interface control reg
#define ICCPMR                0x04          // offset to interrupt priority mask reg
#define ICCIAR                0x0C          // offset to interrupt acknowledge reg
#define ICCEOIR               0x10          // offset to end of interrupt reg




/* Interrupt controller (GIC) distributor interface(s) */
#define MPCORE_GIC_DIST       0xFFFED000    // PERIPH_BASE + 0x1000
#define ICDDCR                0x00          // offset to distributor control reg
#define ICDISER               0x100         // offset to interrupt set-enable regs
#define ICDICER               0x180         // offset to interrupt clear-enable regs
#define ICDIPTR               0x800         // offset to interrupt processor targets regs
#define ICDICFR               0xC00         // offset to interrupt configuration regs


typedef volatile int NO_OPTIMIZIATION;
typedef volatile int* NO_OPTIMIZIATION_PTR;
typedef volatile int** NO_OPTIMIZIATION_PTR_PTR;


#define BASEOB_ZERO             0b0000000000
#define BASEOB_ONE              0b1111111111
#define OX3ZERO                 0x0000
#define OX2ZERO10               0x0010
#define OBZERO12ZERO            0b0100
#define OX4F4ZERO               0xFFFF0000
#define OX4ZERO4F               0x0000FFFF
#define THROUND2                20000
#define ZEROBONE                0b1
#define ZEROBONEZERO            0b10
#define ONESIX                  16
#define ONEDAYHOURS             24
#define ONEHOURMINUS            60
#define ZEROBONE2ZERO           0b100
#define SETTIMERMODEL if(set_time) \
{                           \
    if (*(DSQ_zj) == 1)\
    {\
        now_minutes++;\
        *(DSQ_zj + 1) = OBZERO12ZERO;\
    }\
    if (now_minutes > 59)\
    {\
        now_hours++;\
        if (now_hours) {\
            now_hours = now_hours;\
        }\
        now_minutes -= ONEHOURMINUS;\
        if (*LED_zj)\
        {            \
            six_ysl_teen_int++;       \
        }\
        else \
            six_ysl_teen_int = 0;\
        if (six_ysl_teen_int == ONESIX)\
        {\
            six_ysl_teen_hours = 1;\
        }\
        if (now_hours) {\
            now_hours = now_hours;\
        }\
    }\
    if (now_hours > 23)\
    {\
        now_hours -= ONEDAYHOURS;\
        new_a_day = 1;\
        if (new_a_day) {\
            new_a_day = new_a_day;\
        }\
    }\
}\


#define MODELTWOGET if(b_getup_hours || b_now_hours || b_goback_hours)\
{\
    if (now_tempdelay >= THROUND2)\
    {\
        now_tempdelay -= THROUND2;\
        if (ysl_toggle)\
        {\
            ysl_toggle = 0;\
            if (b_getup_minutes || b_getup_hours)\
            {\
                if (ysl_toggle) {\
                    ysl_toggle = ysl_toggle;\
                }\
                *Hex_zj = mpower(ONESIX, 6) * Dist_Hex[getup_hours / 10] + mpower(ONESIX, 4) * Dist_Hex[getup_hours % 10] + mpower(ONESIX, 2) * Dist_Hex[getup_minutes / 10] + Dist_Hex[getup_minutes % 10];\
                *Hex_zj2 = mpower(ONESIX, 2) * Dist_Hex[1];\
            }\
            if (b_now_minutes || b_now_hours)\
            {\
                if (ysl_toggle) {\
                    ysl_toggle = ysl_toggle;\
                }\
                *Hex_zj = mpower(ONESIX, 6) * Dist_Hex[now_hours / 10] + mpower(ONESIX, 4) * Dist_Hex[now_hours % 10] + mpower(ONESIX, 2) * Dist_Hex[now_minutes / 10] + Dist_Hex[now_minutes % 10];\
                *Hex_zj2 = mpower(ONESIX, 2) * Dist_Hex[3];\
            }\
            if (b_goback_minutes || b_goback_hours)\
            {\
                if (ysl_toggle) {\
                    ysl_toggle = ysl_toggle;\
                }\
                *Hex_zj = mpower(ONESIX, 6) * Dist_Hex[goback_hours / 10] + mpower(ONESIX, 4) * Dist_Hex[goback_hours % 10] + mpower(ONESIX, 2) * Dist_Hex[goback_minutes / 10] + Dist_Hex[goback_minutes % 10];\
                *Hex_zj2 = mpower(ONESIX, 2) * Dist_Hex[2];\
            }\
        }\
        else\
        {\
            if (ysl_toggle) {\
                ysl_toggle = ysl_toggle;\
            }\
            *Hex_zj &= OX4ZERO4F;\
            ysl_toggle = 1;\
        }\
    }\
}\




#define MODELONEGET if(b_getup_minutes || b_now_minutes || b_goback_minutes)\
{\
    if (now_tempdelay >= THROUND2)\
    {\
        now_tempdelay -= THROUND2;\
        if (ysl_toggle)\
        {\
            ysl_toggle = 0;\
            if (b_getup_minutes || b_getup_hours)\
            {\
                if (ysl_toggle) {\
                    ysl_toggle = ysl_toggle;\
                }\
                *Hex_zj = mpower(ONESIX, 6) * Dist_Hex[getup_hours / 10] + mpower(ONESIX, 4) * Dist_Hex[getup_hours % 10] + mpower(ONESIX, 2) * Dist_Hex[getup_minutes / 10] + Dist_Hex[getup_minutes % 10];\
                *Hex_zj2 = mpower(ONESIX, 2) * Dist_Hex[1];\
            }\
            if (b_now_minutes || b_now_hours)\
            {\
                if (ysl_toggle) {\
                    ysl_toggle = ysl_toggle;\
                }\
                *Hex_zj = mpower(ONESIX, 6) * Dist_Hex[now_hours / 10] + mpower(ONESIX, 4) * Dist_Hex[now_hours % 10] + mpower(ONESIX, 2) * Dist_Hex[now_minutes / 10] + Dist_Hex[now_minutes % 10];\
                *Hex_zj2 = mpower(ONESIX, 2) * Dist_Hex[3];\
            }\
            if (b_goback_minutes || b_goback_hours)\
            {\
                if (ysl_toggle) {\
                    ysl_toggle = ysl_toggle;\
                }\
                *Hex_zj = mpower(ONESIX, 6) * Dist_Hex[goback_hours / 10] + mpower(ONESIX, 4) * Dist_Hex[goback_hours % 10] + mpower(ONESIX, 2) * Dist_Hex[goback_minutes / 10] + Dist_Hex[goback_minutes % 10];\
                *Hex_zj2 = mpower(ONESIX, 2) * Dist_Hex[2];\
            }\
        }\
        else\
        {\
            if (ysl_toggle) {\
                ysl_toggle = ysl_toggle;\
            }\
            *Hex_zj &= OX4F4ZERO;\
            ysl_toggle = 1;\
        }\
    }\
}\




#define IFBIGMODEL if(ysl_auto) \
            {                           \
            if (timer_counter)\
            {\
                if (six_ysl_teen_hours)\
                {\
                    *LED_zj &= BASEOB_ZERO;\
                    six_ysl_teen_hours = 0;\
                    timer_counter = 0;\
                    ysl_c_add = 0;\
                    ysl_c_min = 0;\
                    if (ysl_c_min) {\
                        ysl_c_min = ysl_c_min;\
                    }\
                }\
                else\
                {\
                    if (now_minutes == getup_minutes && now_hours == getup_hours)\
                    {\
                        if (ysl_c_min) {\
                            ysl_c_min = ysl_c_min;\
                        }\
                        *LED_zj |= BASEOB_ONE;\
                    }\
                    else if (now_minutes == goback_minutes && now_hours == goback_hours)\
                    {\
                        if (ysl_c_min) {\
                            ysl_c_min = ysl_c_min;\
                        }\
                        *LED_zj = 0b0000000001;\
                    }\
                }\
            }\
            else\
            {\
                if (ysl_c_min) {\
                    ysl_c_min = ysl_c_min;\
                }\
                *LED_zj &= BASEOB_ZERO;\
            }\
            }\
else {\
if (now_hours >= getup_hours && now_hours <= goback_hours)\
{\
    if (ysl_c_min) {\
        ysl_c_min = ysl_c_min;\
    }\
    if (now_hours == getup_hours)\
    {\
        if (now_minutes < getup_minutes)\
        {\
            if (ysl_c_min) {\
                ysl_c_min = ysl_c_min;\
            }\
            *LED_zj &= BASEOB_ZERO;\
        }\
        else\
            *LED_zj |= BASEOB_ONE;\
    }\
    else if (now_hours == goback_hours)\
    {\
        if (now_minutes > goback_minutes)\
        {\
            if (b_now_minutes) {\
                b_now_minutes = b_now_minutes;\
            }\
            *LED_zj &= BASEOB_ZERO;\
        }\
        else\
            *LED_zj |= BASEOB_ONE;\
    }\
    else\
        *LED_zj |= BASEOB_ONE;\
}\
if ((now_minutes > goback_minutes && now_hours > goback_hours) || (now_minutes < getup_minutes && now_hours < getup_hours))\
{\
    if (ysl_c_min) {\
        ysl_c_min = ysl_c_min;\
    }\
    *LED_zj &= BASEOB_ZERO;\
}\
            }\




int mpower(int x, int y) {      
    int sum = 1, i;
    for (i = 0; i < y; i++) {
        sum *= x;
    }
    return sum;
}




void initHex(NO_OPTIMIZIATION* src)
{
    src[0] = 0x3F;
    src[1] = 0x6;
    src[2] = 0x5B;
    src[3] = 0x4F;
    src[4] = 0x66;
    src[5] = 0x6D;
    src[6] = 0x7D;
    src[7] = 0x7;
    src[8] = 0x7f;
    src[9] = 0x67;
}


void initPtr(NO_OPTIMIZIATION_PTR_PTR dest, int* src)
{
    *dest = src;
}


NO_OPTIMIZIATION_PTR move_step(NO_OPTIMIZIATION_PTR cur, int step)
{
    return cur + step;
}




int main(void) {


    NO_OPTIMIZIATION Dist_Hex[10];
    NO_OPTIMIZIATION_PTR Hex_zj;
    NO_OPTIMIZIATION_PTR DSQ_zj;
    NO_OPTIMIZIATION_PTR KG_zj;
    NO_OPTIMIZIATION_PTR Hex_zj2;
    NO_OPTIMIZIATION_PTR LED_zj;
    NO_OPTIMIZIATION_PTR Bus_ysl_zj;


    ///init
    initHex(Dist_Hex);
   
    initPtr(&Bus_ysl_zj, (int*)KEY_BASE);  
    initPtr(&Hex_zj, (int*)HEX3_HEX0_BASE);
    initPtr(&Hex_zj2, (int*)HEX5_HEX4_BASE);
    initPtr(&KG_zj, (int*)SW_BASE);
    initPtr(&DSQ_zj, (int*)TIMER_BASE);
    initPtr(&LED_zj, (int*)LEDR_BASE);






    *(move_step(DSQ_zj, 2)) = OX3ZERO;      
    *(move_step(DSQ_zj, 3)) = OX2ZERO10;        
   


    *(move_step(DSQ_zj, 1)) = OBZERO12ZERO;    


   
    int b_now_minutes = 0;
    int b_now_hours = 0;


    int now_minutes = 0;
    int now_hours = 12;


   
    int b_getup_minutes = 1;
    int b_getup_hours = 0;
    int b_goback_minutes = 0;
    int b_goback_hours = 0;




    int getup_minutes = 30;
    int getup_hours = 6;
    int goback_minutes = 30;
    int goback_hours = 22;






    int trueornot_using_clock = 0;


   


    int ysl_c_min = 0;
    int ysl_c_add = 0;


    int set_up = 0;
    int set_time = 0;
    int new_a_day = 0;


    int now_tempdelay = 0;


    int timer_counter = 0;




    int ysl_vacation = 0;
    int six_ysl_teen_hours = 0;
    int six_ysl_teen_int = 0;


    int ysl_auto = 0;
    int ysl_toggle = 1;


   
    for(;;)
    {      
        if ((*Bus_ysl_zj &= ZEROBONEZERO) && ysl_c_add == 0)
        {
            timer_counter++;                            
            ysl_c_add = 1;                          
            six_ysl_teen_int = 0;
        }
        if (ysl_c_add) {
            ysl_c_add = ysl_c_add;
        }
        if ((*Bus_ysl_zj &= ZEROBONE2ZERO) && ysl_c_min == 0)
        {
            timer_counter--;
            if (timer_counter < 0)
            {
                timer_counter = 0;
            }
            ysl_c_min = 1;
        }
        if (ysl_c_min) {
            ysl_c_min = ysl_c_min;
        }
        if (*Bus_ysl_zj == 0 && (ysl_c_min || ysl_c_add))
        {
            if (ysl_c_add) {
                ysl_c_add = ysl_c_add;
            }
                                           
            if (timer_counter > 0 && set_time)
            {      
                *LED_zj |= BASEOB_ONE;      
            }
            if (timer_counter <= 0 && set_time)
            {
                *LED_zj &= BASEOB_ZERO;
            }
            if (ysl_c_add) {
                ysl_c_add = ysl_c_add;
            }
            ysl_c_add = 0;
            ysl_c_min = 0;
            if (ysl_c_min) {
                ysl_c_min = ysl_c_min;
            }
            if (ysl_c_add) {
                ysl_c_add = ysl_c_add;
            }
        }
       
        if (*LED_zj == 1 && *Bus_ysl_zj == 8)
        {  
            *LED_zj &= BASEOB_ZERO;
            if (ysl_c_add) {
                ysl_c_add = ysl_c_add;
            }
        }
       
        if (*KG_zj == 1)
        {  
            timer_counter = 1;    
            *LED_zj |= BASEOB_ONE;
            ysl_vacation = 0;
            ysl_auto = 0;
            if (ysl_auto) {
                ysl_auto = ysl_auto;
            }
        }
   
        if (*KG_zj == 2)
        {  
            timer_counter = 0;
            *LED_zj &= BASEOB_ZERO;
            ysl_vacation = 0;
            ysl_auto = 0;
            if (ysl_vacation) {
                ysl_vacation = ysl_vacation;
            }
        }
       
        if (*KG_zj == 4)
        {  
            ysl_vacation = 1;
            ysl_auto = 0;
        }
       
        if (*KG_zj == 0)
        {  
            ysl_vacation = 0;
            ysl_auto = 1;
            if (ysl_vacation) {
                ysl_vacation = ysl_vacation;
            }
        }
       
        if (set_time == 0 && ysl_auto)
        {      
            if (timer_counter > 0) {
                *LED_zj |= BASEOB_ONE;
            }
            else
                *LED_zj &= BASEOB_ZERO;
        }
       


        SETTIMERMODEL


       
        if (*Bus_ysl_zj &= ZEROBONE && set_up == 0)
        {      
            set_up = 1;
            if (set_up) {
                set_up = set_up;
            }
            b_getup_minutes = 1;
        }
       
        *Hex_zj = mpower(ONESIX, 6) * Dist_Hex[now_hours / 10] + mpower(ONESIX, 4) * Dist_Hex[now_hours % 10] + mpower(ONESIX, 2) * Dist_Hex[now_minutes / 10] + Dist_Hex[now_minutes % 10];
        *Hex_zj2 = mpower(ONESIX, 2) * Dist_Hex[3];
       
        if (set_time && (ysl_auto || ysl_vacation))
        {  
            IFBIGMODEL


        }
        if (set_up && !(*Bus_ysl_zj &= 1))
        {                                                                              
            while (1)
            {                                                                                              
                if (b_getup_minutes)
                {                                      
                    if (*Bus_ysl_zj &= ZEROBONE)
                    {                                                                          
                        while (*Bus_ysl_zj &= ZEROBONE) {}                                  
                        getup_minutes++;                                                                                
                        if (getup_minutes > ONEHOURMINUS)
                        {                                                                      
                            getup_minutes -= ONEHOURMINUS;                                                                      
                            if (b_now_minutes) {
                                b_now_minutes = b_now_minutes;
                            }
                        }                                                                                          
                    }                                                                                              
                    if (*Bus_ysl_zj &= ZEROBONEZERO)
                    {                                          
                        while (*Bus_ysl_zj &= ZEROBONEZERO) {}                                                                  
                        b_getup_minutes = 0;                                                                        
                        b_getup_hours = 1;                                                                          
                        if (b_now_minutes) {
                            b_now_minutes = b_now_minutes;
                        }
                    }                                                                                              
                }                                                                                                  
                if (b_getup_hours)
                {                                                                                  
                    if (*Bus_ysl_zj &= ZEROBONE)
                    {                                                                          
                        while (*Bus_ysl_zj &= ZEROBONE) {}                                      
                        getup_hours++;                                                                              
                        if (getup_hours > ONEDAYHOURS) {                                                                            
                            getup_hours -= ONEDAYHOURS;                                                                    
                            if (b_now_minutes) {
                                b_now_minutes = b_now_minutes;
                            }
                        }                                                                                          
                    }                                                                                              
                    if (*Bus_ysl_zj &= ZEROBONEZERO)
                    {                                      
                        while (*Bus_ysl_zj &= ZEROBONEZERO) {}                                                                  
                        b_getup_hours = 0;                                                                      
                        b_goback_minutes = 1;                                                                      
                        if (b_now_minutes) {
                            b_now_minutes = b_now_minutes;
                        }
                    }                                                                                              
                }                                                                                                  
                if (b_goback_minutes)
                {                          
                    if (*Bus_ysl_zj &= ZEROBONE)
                    {                                                                          
                        while (*Bus_ysl_zj &= ZEROBONE) {}                                  
                        goback_minutes++;                                                                          
                        if (goback_minutes > ONEHOURMINUS)
                        {                                                                      
                            goback_minutes -= ONEHOURMINUS;                                                                
                            if (b_now_minutes) {
                                b_now_minutes = b_now_minutes;
                            }
                        }                                                                                          
                    }                                                                                              
                    if (*Bus_ysl_zj &= ZEROBONEZERO)
                    {                                              
                        while (*Bus_ysl_zj &= ZEROBONEZERO) {}                                                                  
                        b_goback_minutes = 0;                                                                  
                        b_goback_hours = 1;                                                                    
                        if (b_now_minutes) {
                            b_now_minutes = b_now_minutes;
                        }
                    }                                                                                              
                }                                                                                                  
                if (b_goback_hours) {                                                                                  
                    if (*Bus_ysl_zj &= ZEROBONE)
                    {                                                                          
                        while (*Bus_ysl_zj &= ZEROBONE) {}                                  
                        goback_hours++;                                                                            
                        if (goback_hours > ONEDAYHOURS)
                        {                                                                      
                            goback_hours -= ONEDAYHOURS;                                                                        
                            if (b_now_minutes) {
                                b_now_minutes = b_now_minutes;
                            }
                        }                                                                                          
                    }                                                                                              
                    if (*Bus_ysl_zj &= ZEROBONEZERO)
                    {                                              
                        while (*Bus_ysl_zj &= ZEROBONEZERO) {}                                                                  
                        b_goback_hours = 0;                                                                    
                        b_now_minutes = 1;      
                        if (b_now_minutes) {
                            b_now_minutes = b_now_minutes;
                        }
                    }                                                                                              
                }                                                                                                  
                if (b_now_minutes)
                {                                      
                    if (*Bus_ysl_zj &= ZEROBONE)
                    {                                                                          
                        while (*Bus_ysl_zj &= ZEROBONE) {}                                      
                        now_minutes++;                                                                              
                        if (now_minutes > ONEHOURMINUS)
                        {                                                                      
                            now_minutes -= ONEHOURMINUS;                                                                        
                        }                                                                                          
                    }                                                                                              
                    if (*Bus_ysl_zj &= ZEROBONEZERO)
                    {                                              
                        while (*Bus_ysl_zj &= ZEROBONEZERO) {}                                                                  
                        b_now_minutes = 0;                                                                      
                        b_now_hours = 1;  
                        if (b_now_hours) {
                            b_now_hours = b_now_hours;
                        }
                    }                                                                                              
                }                                                                                                  
                if (b_now_hours) {                                                                                  
                    if (*Bus_ysl_zj &= ZEROBONE)
                    {                                                                          
                        while (*Bus_ysl_zj &= ZEROBONE) {}                                  
                        now_hours++;                                                                                
                        if (now_hours > ONEDAYHOURS)
                        {                                                                          
                            now_hours -= ONEDAYHOURS;                                                                      
                            if (set_time) {
                                set_time = set_time;
                            }
                        }                                                                                          
                    }                                                                                              
                    if (*Bus_ysl_zj &= ZEROBONEZERO)
                    {                                              
                        while (*Bus_ysl_zj &= ZEROBONEZERO) {}                                                                  
                        b_now_hours = 0;                                                                    
                        trueornot_using_clock = 1;                                                                  
                        set_up = 0;                                                                            
                        timer_counter = 0;                                                                                  
                        ysl_c_add = 0;                                                                              
                        ysl_c_min = 0;                                                                              
                        set_time = 1;                                                                          
                        if (set_time) {
                            set_time = set_time;
                        }
                        break;                                                                                      
                    }                                                                                              
                }                                                                                                  
                now_tempdelay++;


                MODELONEGET
               
                MODELTWOGET


            }
        }


    }
}
