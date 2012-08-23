#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "part.h"
#include "plane.h"
#include "region.h"

#define CMD_HELP            0x00
#define CMD_SHOW_PLANES     0x01
#define CMD_SHOW_REGIONS    0x02
#define CMD_ADD_REGION      0x03
#define CMD_ADD_EXTRUDE     0x04
#define CMD_ADD_CUT_EXTRUDE 0x05
#define CMD_SAVE_FILE       0x06
#define CMD_LOAD_FILE       0x07
#define CMD_QUIT            0x08

int main(int argn, char * argv[])
{
//  part_t _part, *part = &_part;
  printf(">>Welcome to Megatherium\n");
  printf(">>Initializing Blank Part...\n");
 // part_init(part);
  printf(">>Part Initialization Complete...\n");
  printf("Type 0 for help\n");
  uint8_t cmd;
  while (1)
  {
    printf(">");
    scanf("%d", &cmd);
    switch (cmd) 
    {
      case CMD_HELP:
        printf(">>Help menu:\n");
        printf(">>%d This Menu\n", CMD_HELP);
        printf(">>%d Show Planes\n", CMD_SHOW_PLANES);
        printf(">>%d Show Regions\n", CMD_SHOW_REGIONS);
        printf(">>%d Add Region\n", CMD_ADD_REGION);
        printf(">>%d Add Extrude\n", CMD_ADD_EXTRUDE);
        printf(">>%d Add Cut Extrude\n", CMD_ADD_CUT_EXTRUDE);
        printf(">>%d Save File\n", CMD_SAVE_FILE);
        printf(">>%d Load File\n", CMD_LOAD_FILE);
        printf(">>%d Exit Megatherium\n", CMD_QUIT);
        break;
      case CMD_SHOW_PLANES:
        printf("Unsupported\n");
        break;
      case CMD_SHOW_REGIONS:
        printf("Unsupported\n");
        break;
      case CMD_ADD_REGION:
        printf("Unsupported\n");
        break;
      case CMD_ADD_CUT_EXTRUDE:
        printf("Unsupported\n");
        break;
      case CMD_ADD_EXTRUDE:
        printf("Unsupported\n");
        break;
      case CMD_SAVE_FILE:
        printf("Unsupported\n");
        break;
      case CMD_LOAD_FILE:
        printf("Unsupported\n");
        break;
      case CMD_QUIT:
        printf("Bye!\n");
        return 0;
        break;

    }
  }
  //part_add_plane();
  //plane_new(part, plane);
  // should never get here
  return -1;
}
