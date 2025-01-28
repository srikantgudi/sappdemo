#include "stdafx.h"
#include "header.h"
int Main::IsNumber(char* stackStartPtr,String_16& str){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<str.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=str.getAt(stackStartPtr,i);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(str.isNumberChar(stackStartPtr,c)!=1){
         return 0;
         
      }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

void Main::convertTemp(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   double numTemp;
   double toTemp;
   char tempType;tempType='c';
   char toType;
   SPRStackArrayConcrete<char,18> spr_StringScratchd9;strcpy(spr_StringScratchd9._array,"\nConvert Temp\n");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   pfc.fstr(stackStartPtr,spr_StringScratchd9).pr(stackStartPtr);
   while(1){
      SPRStackArrayConcrete<char,16> spr_StringScratchda;strcpy(spr_StringScratchda._array,"Enter number: ");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchda).prNoLF(stackStartPtr);
      cin >> numTemp;
      SPRStackArrayConcrete<char,42> spr_StringScratchdb;strcpy(spr_StringScratchdb._array,"Enter type (c or f, any other to quit): ");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchdb).prNoLF(stackStartPtr);
      cin >> tempType;
      if(tempType=='c'){
         toType='f';
         toTemp=(numTemp*1.8)+32.0;
         SPRStackArrayConcrete<char,11> spr_StringScratchdc;strcpy(spr_StringScratchdc._array,"$ $ = $ $");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratchdc).saDbl(stackStartPtr,numTemp,0,2).sa(stackStartPtr,tempType).saDbl(stackStartPtr,toTemp,0,2).sa(stackStartPtr,toType).pr(stackStartPtr);
         
      }
      else
      {
      if(tempType=='f'){
            toType='c';
            toTemp=(numTemp-32.0)/1.8;
            SPRStackArrayConcrete<char,11> spr_StringScratchdd;strcpy(spr_StringScratchdd._array,"$ $ = $ $");
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            pfc.fstr(stackStartPtr,spr_StringScratchdd).saDbl(stackStartPtr,numTemp,0,2).sa(stackStartPtr,tempType).saDbl(stackStartPtr,toTemp,0,2).sa(stackStartPtr,toType).pr(stackStartPtr);
            
         }
         else
         {
         return ;
            }
         }
      
   };
   
   
} //End Of Method

int Main::main(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   CommandlineArgs args;
   QM qm;
   char opt;
   while(opt!='q'){
      SPRStackArrayConcrete<char,20> spr_StringScratchde;strcpy(spr_StringScratchde._array,"\nSappeur Demo App");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchde).pr(stackStartPtr);
      SPRStackArrayConcrete<char,35> spr_StringScratchdf;strcpy(spr_StringScratchdf._array,"\nc. Convert temperature\nq. Quit");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratchdf).pr(stackStartPtr);
      SPRStackArrayConcrete<char,21> spr_StringScratche0;strcpy(spr_StringScratche0._array,"\nEnter an option: ");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratche0).pr(stackStartPtr);
      cin >> opt;
      SPRStackArrayConcrete<char,9> spr_StringScratche1;strcpy(spr_StringScratche1._array,"opt = $");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratche1).sa(stackStartPtr,opt).pr(stackStartPtr);
      if(opt=='c'){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         this->convertTemp(stackStartPtr);
         
      }
      
   };
   return 1;
   
   
} //End Of Method

