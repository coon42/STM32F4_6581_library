//////////////////////////
// Write only registers //
//////////////////////////

// Voice 1
#define REG_VOICE_1_FREQ_LOW        0x00
#define REG_VOICE_1_FREQ_HI         0x01
#define REG_VOICE_1_PW_LOW          0x02
#define REG_VOICE_1_PW_HI           0x03
#define REG_VOICE_1_CONTROL         0x04
#define REG_VOICE_1_ATTACK_DECAY    0x05
#define REG_VOICE_1_SUSTAIN_RELEASE 0x06

// Voice 2
#define REG_VOICE_2_FREQ_LOW        0x07
#define REG_VOICE_2_FREQ_HI         0x08
#define REG_VOICE_2_PW_LOW          0x09
#define REG_VOICE_2_PW_HI           0x0A
#define REG_VOICE_2_CONTROL         0x0B
#define REG_VOICE_2_ATTACK_DECAY    0x0C
#define REG_VOICE_2_SUSTAIN_RELEASE 0x0D

// Voice 3
#define REG_VOICE_3_FREQ_LOW        0x0E
#define REG_VOICE_3_FREQ_HI         0x0F
#define REG_VOICE_3_PW_LOW          0x10
#define REG_VOICE_3_PW_HI           0x11
#define REG_VOICE_3_CONTROL         0x12
#define REG_VOICE_3_ATTACK_DECAY    0x13
#define REG_VOICE_3_SUSTAIN_RELEASE 0x14

// Filter
#define REG_FC_LO					0x15
#define REG_FC_HI					0x16
#define REG_RES_FILT				0x17
#define REG_MODE_VOL				0x18

//////////////////////////
// Read only registers //
//////////////////////////
#define REG_POTX					0x19
#define REG_POTY					0x1A
#define REG_OSC3_RANDOM				0x1B
#define REG_ENV3					0x1C



int SID_writeRegister(unsigned char reg, unsigned char value);


//byte read_register();


