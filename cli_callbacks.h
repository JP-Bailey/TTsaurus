#ifndef __CLI_CALLBACKS_H__
#define __CLI_CALLBACKS_H__

#include "cli.h"

void cmd_start_callback(CommandParser<>::Argument*, char*);
void cmd_stop_callback(CommandParser<>::Argument*, char*);

#endif

// 
// End of file.
//