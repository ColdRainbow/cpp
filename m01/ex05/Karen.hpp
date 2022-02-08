#ifndef __KAREN_H__
#define __KAREN_H__

#include <string>
#include <iostream>
#include <cstdlib>

#define MAX_VERBOSITY_LEVEL 4

class Karen {
public:
        void complain (std::string level);
        Karen();

private:
        void (Karen::*handler[MAX_VERBOSITY_LEVEL])(void); 
        int verbosity_from_string(std::string);

        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

private:
        static std::string verbosity_strings[MAX_VERBOSITY_LEVEL];
};

#endif
