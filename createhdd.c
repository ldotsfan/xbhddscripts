#include<stdio.h>
#include<stdint.h>

int8_t partHeader[0x1e0] = {
  0x2A, 0x2A, 0x2A, 0x2A, 0x50, 0x41, 0x52, 0x54, 0x49, 0x4E, 0x46, 0x4F, 0x2A, 0x2A, 0x2A, 0x2A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x42, 0x4F, 0x58, 0x20, 0x53, 0x48, 0x45, 0x4C, 0x4C, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x00, 0x00, 0x00, 0x80, 0x00, 0xF4, 0x55, 0x00, 0xB0, 0x96, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x42, 0x4F, 0x58, 0x20, 0x44, 0x41, 0x54, 0x41, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x00, 0x00, 0x00, 0x80, 0x00, 0x54, 0x46, 0x00, 0x00, 0xA0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x42, 0x4F, 0x58, 0x20, 0x47, 0x41, 0x4D, 0x45, 0x20, 0x53, 0x57, 0x41, 0x50, 0x20, 0x31,
  0x00, 0x00, 0x00, 0x80, 0x00, 0x04, 0x00, 0x00, 0x00, 0x70, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x42, 0x4F, 0x58, 0x20, 0x47, 0x41, 0x4D, 0x45, 0x20, 0x53, 0x57, 0x41, 0x50, 0x20, 0x32,
  0x00, 0x00, 0x00, 0x80, 0x00, 0x74, 0x17, 0x00, 0x00, 0x70, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x42, 0x4F, 0x58, 0x20, 0x47, 0x41, 0x4D, 0x45, 0x20, 0x53, 0x57, 0x41, 0x50, 0x20, 0x33,
  0x00, 0x00, 0x00, 0x80, 0x00, 0xE4, 0x2E, 0x00, 0x00, 0x70, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x42, 0x4F, 0x58, 0x20, 0x46, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x00, 0x00, 0x00, 0x80, 0xB0, 0x8A, 0xEE, 0x00, 0x50, 0x75, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x42, 0x4F, 0x58, 0x20, 0x47, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 };

int8_t marker[0x4] = {
  0x42, 0x52, 0x46, 0x52 };
off_t markerPos = 1536;

int8_t fatxHeader[0x12] = {
  0x46, 0x41, 0x54, 0x58, 0x06, 0x91, 0x50, 0x50, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 };

int8_t ffMarker = 0xFF;
int8_t f8Marker = 0xF8;

off_t fatxPos[6] = {524288,786956288,1573388288,2359820288,2884108288,8004132864};
off_t mapPos[6][2] = {{524306,528387},{786956306,786960387},{1573388306,1573392387},{2359820306,2359824387},{2884108306,2884112391},{8004132882,8004136963}};
off_t f8Pos[6] = {528384,786960384,1573392384,2359824384,2884112384,8004136960};
off_t map2Pos[6][2] = {{626688,643071},{787058688,787075071},{1573490688,1573507071},{2359889920,2359906303},{2885365760,2885382143},{8004210688,8004227071}};

int main (int argc, char *argv[])
{
  FILE * file = fopen (argv[1],"rb+");
  int i;
  off_t j;
  if (file != NULL){
        fseeko(file,0,SEEK_SET);
        fwrite(partHeader,sizeof(int8_t),sizeof(partHeader),file);
        for (i=0;i<6;i++){
          fseeko(file,fatxPos[i],SEEK_SET);
          fwrite(fatxHeader,sizeof(int8_t),sizeof(fatxHeader),file);
          for(j=mapPos[i][0];j<=mapPos[i][1];j++){
            fseeko(file,j,SEEK_SET);
            fwrite(&ffMarker,sizeof(int8_t),1,file);
      }
      for(j=map2Pos[i][0];j<=map2Pos[i][1];j++){
            fseeko(file,j,SEEK_SET);
            fwrite(&ffMarker,sizeof(int8_t),1,file);
      }
        
          fseeko(file,f8Pos[i],SEEK_SET);
          fwrite(&f8Marker,sizeof(int8_t),1,file);
    }
        fseeko(file,markerPos,SEEK_SET);
        fwrite(marker,sizeof(int8_t),sizeof(marker),file);
    
    fclose(file);
  }
  else{
    printf("Error\n");
    return 1;
  }    
  printf("OK\n");
  return 0;
}

