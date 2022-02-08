#ifndef __KAREN_H__
#define __KAREN_H__

#include <string>
#include <cstdlib>
#include <iostream>

#define MAX_VERBOSITY_LEVEL 5

class Karen {
public:
        Karen();
        void complain (std::string const& level);
        void set_verbosity (std::string level);

private:
        int verbosity;
        void (Karen::*handler[MAX_VERBOSITY_LEVEL])(void); 
        static std::string verbosity_strings[MAX_VERBOSITY_LEVEL];

        int verbosity_from_string(std::string const&);

        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void nop(void);
};

#endif
