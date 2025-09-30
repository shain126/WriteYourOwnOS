void printf(char* str)
{
    short* video_memory = (short*)0xb8000;
    static int i = 0;
    while(*str != '\0')
    {
        video_memory[i] = (video_memory[i] & 0xFF00) | str[i];
        //video_memory[i++] = *str++;
        //video_memory[i++] = 0x07;
    }
}

extern "C" void kernelMain(void* multiboot_structure, unsigned int magicnumber)
{
    printf("Hello, World!");
    while(1);
} 