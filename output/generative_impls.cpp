#include "stdafx.h"
#include "header.h"
String_16::String_16(char* stackStartPtr,SPRStackArray<char>& init){
   char SPR_stack_dummy_var;
   _length=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,init);
   
   
} //End Of Method

String_16::String_16(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _length=0;
   SPRStackArrayConcrete<char,2> spr_StringScratche2;strcpy(spr_StringScratche2._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratche2);
   
   
} //End Of Method

int String_16::capacity(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
      return _extendedBuf._theObject->_sz;
      
   }
   return _preAllocBuf._sz;
   
   
} //End Of Method

void String_16::ersetzen(char* stackStartPtr,String_16& alt,String_16& neu,String_16& ergebnis){
   char SPR_stack_dummy_var;
   int stelle;stelle=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int ende;ende=this->length(stackStartPtr)-alt.length(stackStartPtr);
   while(stelle<ende){
      int j;j=0;
      int gleich;gleich=1;
      int stellePruef;stellePruef=stelle;
      {//begin of SPR for statement
      j=0;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while(j<alt.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->getAt(stackStartPtr,stellePruef)!=alt.getAt(stackStartPtr,j)){
            gleich=0;
            
         }
         stellePruef++;
         j++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      
      }
      }//end of SPR for statement
      if(gleich==1){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ergebnis.append(stackStartPtr,neu);
         stelle=stellePruef;
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ergebnis.append(stackStartPtr,this->getAt(stackStartPtr,stelle));
         stelle++;
         }
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(stelle<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ergebnis.append(stackStartPtr,this->getAt(stackStartPtr,stelle));
      stelle++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   
   
} //End Of Method

void String_16::getKey(char* stackStartPtr,SPRSmartPtr<String_16> key){
   char SPR_stack_dummy_var;
   key=this;
   
   
} //End Of Method

int String_16::compare(char* stackStartPtr,String_16& other){
   char SPR_stack_dummy_var;
   int equal;equal=1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->length(stackStartPtr)==other.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int l;l=this->length(stackStartPtr);
      int i;
      {//begin of SPR for statement
      i=0;
      while((i<l)&&(equal==1)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
            equal=0;
            
         }
         i++;
         
      
      }
      }//end of SPR for statement
      
   }
   return equal;
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratche3;spr_intScratche3=i;chck_accs_p0(buf,spr_intScratche3,229)
   while((i<buf._theObject->_sz)&&(buf._theObject->_array[spr_intScratche3]!='\0')){
      int j;j=0;
      SPRStackArrayConcrete<char,100> temp;
             int spr_intScratche5;spr_intScratche5=i;chck_accs_p0(buf,spr_intScratche5,231)
      while((j<99)&&(i<buf._theObject->_sz)&&(buf._theObject->_array[spr_intScratche5]!='\0')){
                int spr_intScratche7;spr_intScratche7=j;chck_accs0(temp,spr_intScratche7,233)
                int spr_intScratche9;spr_intScratche9=i;chck_accs_p0(buf,spr_intScratche9,235)
         temp._array[spr_intScratche7]=buf._theObject->_array[spr_intScratche9];
         j=j+1;
         i=i+1;
         spr_intScratche5=i;chck_accs_p0(buf,spr_intScratche5,231)
         
      };
             int spr_intScratcheb;spr_intScratcheb=j;chck_accs0(temp,spr_intScratcheb,237)
      temp._array[spr_intScratcheb]='\0';
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,temp);
      spr_intScratche3=i;chck_accs_p0(buf,spr_intScratche3,229)
      
   };
   
   
} //End Of Method

double String_16::asDouble(char* stackStartPtr){
   char SPR_stack_dummy_var;
   double ret;
   if(_extendedBuf!=0U){
      
                       ret=atof(_extendedBuf._theObject->_array);
                     
      
   }
   else
   {
   
                       ret=atof(_preAllocBuf._array);
                     
      }
   return ret;
   
   
} //End Of Method

void String_16::assign(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,str);
   
   
} //End Of Method

void String_16::assign(char* stackStartPtr,String_16& anderer){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,anderer);
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratched;spr_intScratched=i;chck_accs0(str,spr_intScratched,239)
   while(str._array[spr_intScratched]!='\0'){
      i=i+1;
      spr_intScratched=i;chck_accs0(str,spr_intScratched,239)
      
   };
   if(_extendedBuf!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int l;l=this->length(stackStartPtr);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int cap;cap=this->capacity(stackStartPtr)-1;
      int diff;diff=cap-l;
      if(diff<i){
         int spr_intScratchef;
         spr_intScratchef=(l+i)*2;
         if(spr_intScratchef<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratchef) SPRArray<char>(spr_intScratchef)
         ;
         int j;j=0;
         while(j<l){
                   int spr_intScratchf0;spr_intScratchf0=j;chck_accs_p0(newBuf,spr_intScratchf0,242)
                   int spr_intScratchf2;spr_intScratchf2=j;chck_accs_p0(_extendedBuf,spr_intScratchf2,244)
            newBuf._theObject->_array[spr_intScratchf0]=_extendedBuf._theObject->_array[spr_intScratchf2];
            j=j+1;
            
         };
         int newLength;newLength=l+i;
         while(j<newLength){
                   int spr_intScratchf4;spr_intScratchf4=j;chck_accs_p0(newBuf,spr_intScratchf4,246)
                   int spr_intScratchf6;spr_intScratchf6=j-l;chck_accs0(str,spr_intScratchf6,248)
            newBuf._theObject->_array[spr_intScratchf4]=str._array[spr_intScratchf6];
            j=j+1;
            
         };
                int spr_intScratchf8;spr_intScratchf8=j;chck_accs_p0(newBuf,spr_intScratchf8,250)
         newBuf._theObject->_array[spr_intScratchf8]='\0';
         _extendedBuf=newBuf;
         _length=newLength;
         
      }
      int diff2;diff2=diff+1;
      if(diff2>i){
         int j;
         int newLength;newLength=l+i;
         j=l;
         while(j<newLength){
                   int spr_intScratchfa;spr_intScratchfa=j;chck_accs_p0(_extendedBuf,spr_intScratchfa,252)
                   int spr_intScratchfc;spr_intScratchfc=j-l;chck_accs0(str,spr_intScratchfc,254)
            _extendedBuf._theObject->_array[spr_intScratchfa]=str._array[spr_intScratchfc];
            j=j+1;
            
         };
                int spr_intScratchfe;spr_intScratchfe=j;chck_accs_p0(_extendedBuf,spr_intScratchfe,256)
         _extendedBuf._theObject->_array[spr_intScratchfe]='\0';
         _length=newLength;
         
      }
      
   }
   if(_extendedBuf==0U){
      int freeSpace;freeSpace=_preAllocBuf._sz-_length-1;
      int useExt;useExt=0;
      if(i>freeSpace){
         int spr_intScratch100;
         spr_intScratch100=(_length+i)*2;
         if(spr_intScratch100<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch100) SPRArray<char>(spr_intScratch100)
         ;
         int ii;ii=0;
         while(ii<_length){
                   int spr_intScratch101;spr_intScratch101=ii;chck_accs_p0(_extendedBuf,spr_intScratch101,259)
                   int spr_intScratch103;spr_intScratch103=ii;chck_accs0(_preAllocBuf,spr_intScratch103,261)
            _extendedBuf._theObject->_array[spr_intScratch101]=_preAllocBuf._array[spr_intScratch103];
            ii=ii+1;
            
         };
         int newLength;newLength=_length+i;
         while(ii<newLength){
                   int spr_intScratch105;spr_intScratch105=ii;chck_accs_p0(_extendedBuf,spr_intScratch105,263)
                   int spr_intScratch107;spr_intScratch107=ii-_length;chck_accs0(str,spr_intScratch107,265)
            _extendedBuf._theObject->_array[spr_intScratch105]=str._array[spr_intScratch107];
            ii=ii+1;
            
         };
                int spr_intScratch109;spr_intScratch109=ii;chck_accs_p0(_extendedBuf,spr_intScratch109,267)
         _extendedBuf._theObject->_array[spr_intScratch109]='\0';
                int spr_intScratch10b;spr_intScratch10b=0;chck_accs0(_preAllocBuf,spr_intScratch10b,269)
         _preAllocBuf._array[spr_intScratch10b]='\0';
         _length=newLength;
         useExt=1;
         
      }
      if(useExt==0){
         int k;k=0;
                int spr_intScratch10d;spr_intScratch10d=k;chck_accs0(str,spr_intScratch10d,271)
         while(str._array[spr_intScratch10d]!='\0'){
                   int spr_intScratch10f;spr_intScratch10f=_length;chck_accs0(_preAllocBuf,spr_intScratch10f,273)
                   int spr_intScratch111;spr_intScratch111=k;chck_accs0(str,spr_intScratch111,275)
            _preAllocBuf._array[spr_intScratch10f]=str._array[spr_intScratch111];
            _length=_length+1;
            k=k+1;
            spr_intScratch10d=k;chck_accs0(str,spr_intScratch10d,271)
            
         };
                int spr_intScratch113;spr_intScratch113=_length;chck_accs0(_preAllocBuf,spr_intScratch113,277)
         _preAllocBuf._array[spr_intScratch113]='\0';
         
      }
      
   }
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,2> buf;
          int spr_intScratch115;spr_intScratch115=1;chck_accs0(buf,spr_intScratch115,279)
   buf._array[spr_intScratch115]='\0';
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch117;spr_intScratch117=0;chck_accs0(buf,spr_intScratch117,281)
             int spr_intScratch119;spr_intScratch119=i+pos;chck_accs0(str,spr_intScratch119,283)
      buf._array[spr_intScratch117]=str._array[spr_intScratch119];
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf);
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_16::length(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;i=0;
   return _length;
   
   
} //End Of Method

void String_16::print(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf==0U){
             int spr_intScratch11b;spr_intScratch11b=_preAllocBuf._sz-1;chck_accs0(_preAllocBuf,spr_intScratch11b,285)
      _preAllocBuf._array[spr_intScratch11b]='\0';
      printf("%s\n",_preAllocBuf._array);
      
   }
   if(_extendedBuf!=0U){
             int spr_intScratch11d;spr_intScratch11d=_extendedBuf._theObject->_sz-1;chck_accs_p0(_extendedBuf,spr_intScratch11d,287)
      _extendedBuf._theObject->_array[spr_intScratch11d]='\0';
      printf("%s\n",_extendedBuf._theObject->_array);
      
   }
   
   
} //End Of Method

void String_16::printNoLF(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf==0U){
             int spr_intScratch11f;spr_intScratch11f=_preAllocBuf._sz-1;chck_accs0(_preAllocBuf,spr_intScratch11f,289)
      _preAllocBuf._array[spr_intScratch11f]='\0';
      printf("%s",_preAllocBuf._array);
      
   }
   if(_extendedBuf!=0U){
             int spr_intScratch121;spr_intScratch121=_extendedBuf._theObject->_sz-1;chck_accs_p0(_extendedBuf,spr_intScratch121,291)
      _extendedBuf._theObject->_array[spr_intScratch121]='\0';
      printf("%s",_extendedBuf._theObject->_array);
      
   }
   
   
} //End Of Method

int String_16::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch123;spr_intScratch123=l;chck_accs0(str,spr_intScratch123,293)
   while(str._array[spr_intScratch123]!='\0'){
      l=l+1;
      spr_intScratch123=l;chck_accs0(str,spr_intScratch123,293)
      
   };
   return l;
   
   
} //End Of Method

void String_16::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch125;spr_intScratch125=0;chck_accs_p0(_extendedBuf,spr_intScratch125,295)
      _extendedBuf._theObject->_array[spr_intScratch125]='\0';
      
   }
          int spr_intScratch127;spr_intScratch127=0;chck_accs0(_preAllocBuf,spr_intScratch127,297)
   _preAllocBuf._array[spr_intScratch127]='\0';
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,String_16& other){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int newLength;newLength=_length+other.length(stackStartPtr);
   if(_extendedBuf!=0U){
      int freeCap;freeCap=_extendedBuf._theObject->_sz-1-_length;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(freeCap<other.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         int newCap;newCap=2*(_length+other.length(stackStartPtr));
         int spr_intScratch129;
         spr_intScratch129=newCap;
         if(spr_intScratch129<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<char> > targetBuf;targetBuf=new(spr_intScratch129) SPRArray<char>(spr_intScratch129)
         ;
         {//begin of SPR for statement
         int i;i=0;
         while(i<_length){
                   int spr_intScratch12a;spr_intScratch12a=i;chck_accs_p0(targetBuf,spr_intScratch12a,300)
                   int spr_intScratch12c;spr_intScratch12c=i;chck_accs_p0(_extendedBuf,spr_intScratch12c,302)
            targetBuf._theObject->_array[spr_intScratch12a]=_extendedBuf._theObject->_array[spr_intScratch12c];
            i++;
            
         
         }
         }//end of SPR for statement
         _extendedBuf=targetBuf;
         
      }
      if(other._extendedBuf!=0U){
         {//begin of SPR for statement
         int i;i=_length;
         while(i<newLength){
                   int spr_intScratch12e;spr_intScratch12e=i;chck_accs_p0(_extendedBuf,spr_intScratch12e,304)
                   int spr_intScratch130;spr_intScratch130=i-_length;chck_accs_p0(other._extendedBuf,spr_intScratch130,306)
            _extendedBuf._theObject->_array[spr_intScratch12e]=other._extendedBuf._theObject->_array[spr_intScratch130];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      {//begin of SPR for statement
         int i;i=_length;
         while(i<newLength){
                   int spr_intScratch132;spr_intScratch132=i;chck_accs_p0(_extendedBuf,spr_intScratch132,308)
                   int spr_intScratch134;spr_intScratch134=i-_length;chck_accs0(other._preAllocBuf,spr_intScratch134,310)
            _extendedBuf._theObject->_array[spr_intScratch132]=other._preAllocBuf._array[spr_intScratch134];
            i++;
            
         
         }
         }//end of SPR for statement
         }
             int spr_intScratch136;spr_intScratch136=newLength;chck_accs_p0(_extendedBuf,spr_intScratch136,312)
      _extendedBuf._theObject->_array[spr_intScratch136]='\0';
      
   }
   else
   {
   int freeCap;freeCap=_preAllocBuf._sz-1-_length;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(freeCap<other.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         int newCap;newCap=2*(_length+other.length(stackStartPtr));
         int spr_intScratch138;
         spr_intScratch138=newCap;
         if(spr_intScratch138<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<char> > targetBuf;targetBuf=new(spr_intScratch138) SPRArray<char>(spr_intScratch138)
         ;
         {//begin of SPR for statement
         int i;i=0;
         while(i<_length){
                   int spr_intScratch139;spr_intScratch139=i;chck_accs_p0(targetBuf,spr_intScratch139,315)
                   int spr_intScratch13b;spr_intScratch13b=i;chck_accs0(_preAllocBuf,spr_intScratch13b,317)
            targetBuf._theObject->_array[spr_intScratch139]=_preAllocBuf._array[spr_intScratch13b];
            i++;
            
         
         }
         }//end of SPR for statement
         _extendedBuf=targetBuf;
         if(other._extendedBuf!=0U){
            {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch13d;spr_intScratch13d=i;chck_accs_p0(_extendedBuf,spr_intScratch13d,319)
                      int spr_intScratch13f;spr_intScratch13f=i-_length;chck_accs_p0(other._extendedBuf,spr_intScratch13f,321)
               _extendedBuf._theObject->_array[spr_intScratch13d]=other._extendedBuf._theObject->_array[spr_intScratch13f];
               i++;
               
            
            }
            }//end of SPR for statement
            
         }
         else
         {
         {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch141;spr_intScratch141=i;chck_accs_p0(_extendedBuf,spr_intScratch141,323)
                      int spr_intScratch143;spr_intScratch143=i-_length;chck_accs0(other._preAllocBuf,spr_intScratch143,325)
               _extendedBuf._theObject->_array[spr_intScratch141]=other._preAllocBuf._array[spr_intScratch143];
               i++;
               
            
            }
            }//end of SPR for statement
            }
         
      }
      else
      {
      if(other._extendedBuf!=0U){
            {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch145;spr_intScratch145=i;chck_accs0(_preAllocBuf,spr_intScratch145,327)
                      int spr_intScratch147;spr_intScratch147=i-_length;chck_accs_p0(other._extendedBuf,spr_intScratch147,329)
               _preAllocBuf._array[spr_intScratch145]=other._extendedBuf._theObject->_array[spr_intScratch147];
               i++;
               
            
            }
            }//end of SPR for statement
            
         }
         else
         {
         {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch149;spr_intScratch149=i;chck_accs0(_preAllocBuf,spr_intScratch149,331)
                      int spr_intScratch14b;spr_intScratch14b=i-_length;chck_accs0(other._preAllocBuf,spr_intScratch14b,333)
               _preAllocBuf._array[spr_intScratch149]=other._preAllocBuf._array[spr_intScratch14b];
               i++;
               
            
            }
            }//end of SPR for statement
            }
                int spr_intScratch14d;spr_intScratch14d=newLength;chck_accs0(_preAllocBuf,spr_intScratch14d,335)
         _preAllocBuf._array[spr_intScratch14d]='\0';
         }
      }
   _length=newLength;
   
   
} //End Of Method

void String_16::clearAndReclaimMemory(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
      _extendedBuf=0U;
      
   }
   if(_extendedBuf==0U){
             int spr_intScratch14f;spr_intScratch14f=0;chck_accs0(_preAllocBuf,spr_intScratch14f,337)
      _preAllocBuf._array[spr_intScratch14f]='\0';
      
   }
   
   
} //End Of Method

int String_16::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int ls;ls=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ls=this->lengthOf(stackStartPtr,str);
   int lsp1;lsp1=ls+1;
   if(_extendedBuf!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ls!=this->length(stackStartPtr)){
         return 1;
         
      }
      int i;i=0;
      while(i<lsp1){
                int spr_intScratch151;spr_intScratch151=i;chck_accs0(str,spr_intScratch151,339)
                int spr_intScratch153;spr_intScratch153=i;chck_accs_p0(_extendedBuf,spr_intScratch153,341)
         if(str._array[spr_intScratch151]!=_extendedBuf._theObject->_array[spr_intScratch153]){
            return 1;
            
         }
         i=i+1;
         
      };
      
   }
   if(_extendedBuf==0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ls!=this->length(stackStartPtr)){
         return 1;
         
      }
      int i;i=0;
      while(i<lsp1){
                int spr_intScratch155;spr_intScratch155=i;chck_accs0(str,spr_intScratch155,343)
                int spr_intScratch157;spr_intScratch157=i;chck_accs0(_preAllocBuf,spr_intScratch157,345)
         if(str._array[spr_intScratch155]!=_preAllocBuf._array[spr_intScratch157]){
            return 1;
            
         }
         i=i+1;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,2> buf;
          int spr_intScratch159;spr_intScratch159=0;chck_accs0(buf,spr_intScratch159,347)
   buf._array[spr_intScratch159]=c;
          int spr_intScratch15b;spr_intScratch15b=1;chck_accs0(buf,spr_intScratch15b,349)
   buf._array[spr_intScratch15b]='\0';
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,buf);
   
   
} //End Of Method

char String_16::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch15d;spr_intScratch15d=i;chck_accs_p0(_extendedBuf,spr_intScratch15d,351)
      return _extendedBuf._theObject->_array[spr_intScratch15d];
      
   }
   else
   {
          int spr_intScratch15f;spr_intScratch15f=i;chck_accs0(_preAllocBuf,spr_intScratch15f,353)
      return _preAllocBuf._array[spr_intScratch15f];
      }
   return '0';
   
   
} //End Of Method

void String_16::getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBufRet){
   char SPR_stack_dummy_var;
   extendedBufRet=_extendedBuf;
   
   
} //End Of Method

String_16::~String_16(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _extendedBuf=0U;
   _length=-13;
   
   
} //End Of Method

void String_16::rightOf(char* stackStartPtr,char divider,String_16& oStr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int zeiger;zeiger=this->length(stackStartPtr)-1;
   int fertig;fertig=0;
   while((zeiger>=0)&&(fertig==0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char zeichen;zeichen=this->getAt(stackStartPtr,zeiger);
      if(zeichen==divider){
         fertig=1;
         
      }
      else
      {
      zeiger=zeiger-1;
         }
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   oStr.clear(stackStartPtr);
   {//begin of SPR for statement
   int i;i=zeiger+1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_16::equals(char* stackStartPtr,String_16& other){
   char SPR_stack_dummy_var;
   int equal;equal=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l!=other.length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
         return 0;
         
      }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_16::equals(char* stackStartPtr,SPRStackArray<char>& other){
   char SPR_stack_dummy_var;
   int lother;lother=0;
          int spr_intScratch161;spr_intScratch161=lother;chck_accs0(other,spr_intScratch161,355)
   while((lother<other._sz)&&(other._array[spr_intScratch161]!='\0')){
      lother++;
      spr_intScratch161=lother;chck_accs0(other,spr_intScratch161,355)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch163;spr_intScratch163=i;chck_accs0(other,spr_intScratch163,357)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch163]){
         return 0;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,SPRSmartPtr<String_16> other){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<other._theObject->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,other._theObject->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_16::append(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,16> buf;
          int spr_intScratch165;spr_intScratch165=0;chck_accs0(buf,spr_intScratch165,359)
   buf._array[spr_intScratch165]='\0';
    sprintf(buf._array,"%i",x); 
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,buf);
   
   
} //End Of Method

void String_16::toCharArray(char* stackStartPtr,SPRStackArray<char>& feld){
   char SPR_stack_dummy_var;
   int szm1;szm1=feld._sz-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(szm1<this->length(stackStartPtr)){
             int spr_intScratch167;spr_intScratch167=0;chck_accs0(feld,spr_intScratch167,361)
      feld._array[spr_intScratch167]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch169;spr_intScratch169=i;chck_accs0(feld,spr_intScratch169,363)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch169]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch16b;spr_intScratch16b=i;chck_accs0(feld,spr_intScratch16b,365)
   feld._array[spr_intScratch16b]='\0';
   
   
} //End Of Method

int String_16::asNumber(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->asNumber(stackStartPtr,10);
   
   
} //End Of Method

int String_16::asNumber(char* stackStartPtr,int radix){
   char SPR_stack_dummy_var;
   int ret;ret=0;
   int isNegative;isNegative=0;
   int idx;idx=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->getAt(stackStartPtr,0)=='-'){
      isNegative=1;
      idx=1;
      
   }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(idx<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,idx);
      switch(c){
         case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'0');
            
         };break;
         
         case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'a')+10;
            
         };break;
         
         case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'A')+10;
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            idx=this->length(stackStartPtr);
            
         };
         
      }
      idx++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if(isNegative==1){
      ret=-1*ret;
      
   }
   return ret;
   
   
} //End Of Method

void String_16::escape(char* stackStartPtr,String_16& escaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_16::deEscape(char* stackStartPtr,String_16& deescaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,this->getAt(stackStartPtr,i));
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_16::endsWith(char* stackStartPtr,SPRStackArray<char>& end){
   char SPR_stack_dummy_var;
   int j;j=0;
          int spr_intScratch16d;spr_intScratch16d=j;chck_accs0(end,spr_intScratch16d,367)
   while((end._array[spr_intScratch16d]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch16d=j;chck_accs0(end,spr_intScratch16d,367)
      
   };
   if(j<=0){
      return -1;
      
   }
   else
   {
   j=j-1;
      }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int i;i=this->length(stackStartPtr)-1;
   while((i>=0)&&(j>=0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
             int spr_intScratch16f;spr_intScratch16f=j;chck_accs0(end,spr_intScratch16f,369)
      if(c!=end._array[spr_intScratch16f]){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_16::endsWith(char* stackStartPtr,String_16& str2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(str2.length(stackStartPtr)>this->length(stackStartPtr)){
      return 0;
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p;p=str2.length(stackStartPtr)-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p2;p2=this->length(stackStartPtr)-1;
   {//begin of SPR for statement
   int i;i=p;
   int j;j=p2;
   while(i>0){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(str2.getAt(stackStartPtr,i)!=this->getAt(stackStartPtr,j)){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_16::startsWith(char* stackStartPtr,SPRStackArray<char>& buf){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->lengthOf(stackStartPtr,buf);
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l>this->length(stackStartPtr)){
      return 0;
      
   }
          int spr_intScratch171;spr_intScratch171=i;chck_accs0(buf,spr_intScratch171,371)
   while((i<l)&&(buf._array[spr_intScratch171]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch173;spr_intScratch173=i;chck_accs0(buf,spr_intScratch173,373)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch173]){
         return 0;
         
      }
      i++;
      spr_intScratch171=i;chck_accs0(buf,spr_intScratch171,371)
      
   };
   return 1;
   
   
} //End Of Method

void String_16::subString(char* stackStartPtr,String_16& oStr,int start,int end){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=start;
   while(i<=end){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_16::isNumberChar(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   switch(c){
      case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
         return 1;
         
      };
      default:{
         return 0;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

int String_16::hashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int hc;
   if(_extendedBuf==0U){
       
                       hc = suchoi(_preAllocBuf._array,_length);
                     
      
   }
   else
   {
    
                       hc = suchoi(_extendedBuf._theObject->_array,_length);
                     
      }
   return hc;
   
   
} //End Of Method

int String_16::getHashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->hashCode(stackStartPtr);
   
   
} //End Of Method

void String_16::unitTest(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   if(1==1){
      SPRStackArrayConcrete<char,4> spr_StringScratch175;strcpy(spr_StringScratch175._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch175);
      SPRStackArrayConcrete<char,4> spr_StringScratch176;strcpy(spr_StringScratch176._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch176);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,6> spr_StringScratch177;strcpy(spr_StringScratch177._array,"aaaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch178;strcpy(spr_StringScratch178._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=4)||(s1.equals(stackStartPtr,spr_StringScratch177)!=1)||(s1.equals(stackStartPtr,spr_StringScratch178)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch179;strcpy(spr_StringScratch179._array,"String unittest fail # 1");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch179).pr(stackStartPtr);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.clear(stackStartPtr);
      SPRStackArrayConcrete<char,21> spr_StringScratch17a;strcpy(spr_StringScratch17a._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,spr_StringScratch17a);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch17b;strcpy(spr_StringScratch17b._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch17c;strcpy(spr_StringScratch17c._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch17b)!=1)||(s1.equals(stackStartPtr,spr_StringScratch17c)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch17d;strcpy(spr_StringScratch17d._array,"String unittest fail # 2");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch17d).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,4> spr_StringScratch17e;strcpy(spr_StringScratch17e._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch17e);
      String_16 s2;
      SPRStackArrayConcrete<char,21> spr_StringScratch17f;strcpy(spr_StringScratch17f._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,spr_StringScratch17f);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,s1);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch180;strcpy(spr_StringScratch180._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch181;strcpy(spr_StringScratch181._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s2.length(stackStartPtr)!=21)||(s2.equals(stackStartPtr,spr_StringScratch180)!=1)||(s2.equals(stackStartPtr,spr_StringScratch181)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch182;strcpy(spr_StringScratch182._array,"String unittest fail # 3");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch182).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch183;strcpy(spr_StringScratch183._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch183);
      SPRStackArrayConcrete<char,3> spr_StringScratch184;strcpy(spr_StringScratch184._array,"b");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch184);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,13> spr_StringScratch185;strcpy(spr_StringScratch185._array,"abbbbbbbbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch186;strcpy(spr_StringScratch186._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=11)||(s1.equals(stackStartPtr,spr_StringScratch185)!=1)||(s1.equals(stackStartPtr,spr_StringScratch186)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch187;strcpy(spr_StringScratch187._array,"String unittest fail # 4");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch187).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch188;strcpy(spr_StringScratch188._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch188);
      SPRStackArrayConcrete<char,4> spr_StringScratch189;strcpy(spr_StringScratch189._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch189);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch18a;strcpy(spr_StringScratch18a._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch18b;strcpy(spr_StringScratch18b._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch18a)!=1)||(s1.equals(stackStartPtr,spr_StringScratch18b)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch18c;strcpy(spr_StringScratch18c._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch18c).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch18d;strcpy(spr_StringScratch18d._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch18d);
      SPRStackArrayConcrete<char,4> spr_StringScratch18e;strcpy(spr_StringScratch18e._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch18e);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch18f;strcpy(spr_StringScratch18f._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch190;strcpy(spr_StringScratch190._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch18f)!=1)||(s1.equals(stackStartPtr,spr_StringScratch190)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch191;strcpy(spr_StringScratch191._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch191).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratch192;strcpy(spr_StringScratch192._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch192);
      SPRStackArrayConcrete<char,4> spr_StringScratch193;strcpy(spr_StringScratch193._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch193);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,43> spr_StringScratch194;strcpy(spr_StringScratch194._array,"acccccccccccccccccccccccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch195;strcpy(spr_StringScratch195._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=41)||(s1.equals(stackStartPtr,spr_StringScratch194)!=1)||(s1.equals(stackStartPtr,spr_StringScratch195)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch196;strcpy(spr_StringScratch196._array,"String unittest fail # 7");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch196).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratch197;strcpy(spr_StringScratch197._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s1(stackStartPtr,spr_StringScratch197);
      SPRStackArrayConcrete<char,23> spr_StringScratch198;strcpy(spr_StringScratch198._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 s2(stackStartPtr,spr_StringScratch198);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      int expLength;expLength=10*21+21;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch199;strcpy(spr_StringScratch199._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=expLength)||(s1.equals(stackStartPtr,spr_StringScratch199)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch19a;strcpy(spr_StringScratch19a._array,"String unittest fail # 8");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch19a).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      String_16 ext;
      SPRStackArrayConcrete<char,14> spr_StringScratch19b;strcpy(spr_StringScratch19b._array,"/home/x.docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 filename(stackStartPtr,spr_StringScratch19b);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'/',ext);
      SPRStackArrayConcrete<char,3> spr_StringScratch19c;strcpy(spr_StringScratch19c._array,"$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch19c).sa(stackStartPtr,ext).pr(stackStartPtr);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,3> spr_StringScratch19d;strcpy(spr_StringScratch19d._array,"$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch19d).sa(stackStartPtr,ext).pr(stackStartPtr);
      SPRStackArrayConcrete<char,15> spr_StringScratch19e;strcpy(spr_StringScratch19e._array,"/tmp/abc.html");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.assign(stackStartPtr,spr_StringScratch19e);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,3> spr_StringScratch19f;strcpy(spr_StringScratch19f._array,"$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch19f).sa(stackStartPtr,ext).pr(stackStartPtr);
      
   }
   
   
} //End Of Method

int Hash_String_16::hash(char* stackStartPtr,String_16& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return str.getHashCode(stackStartPtr);
   
   
} //End Of Method

int Compare_String_16::compare(char* stackStartPtr,String_16& s1,String_16& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(s1.equals(stackStartPtr,s2)==1){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void Assigner_String_16::assign(char* stackStartPtr,String_16& s1,String_16& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.append(stackStartPtr,s2);
   
   
} //End Of Method

String_32::String_32(char* stackStartPtr,SPRStackArray<char>& init){
   char SPR_stack_dummy_var;
   _length=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,init);
   
   
} //End Of Method

String_32::String_32(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _length=0;
   SPRStackArrayConcrete<char,2> spr_StringScratch1a0;strcpy(spr_StringScratch1a0._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch1a0);
   
   
} //End Of Method

int String_32::capacity(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
      return _extendedBuf._theObject->_sz;
      
   }
   return _preAllocBuf._sz;
   
   
} //End Of Method

void String_32::ersetzen(char* stackStartPtr,String_32& alt,String_32& neu,String_32& ergebnis){
   char SPR_stack_dummy_var;
   int stelle;stelle=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int ende;ende=this->length(stackStartPtr)-alt.length(stackStartPtr);
   while(stelle<ende){
      int j;j=0;
      int gleich;gleich=1;
      int stellePruef;stellePruef=stelle;
      {//begin of SPR for statement
      j=0;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while(j<alt.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->getAt(stackStartPtr,stellePruef)!=alt.getAt(stackStartPtr,j)){
            gleich=0;
            
         }
         stellePruef++;
         j++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      
      }
      }//end of SPR for statement
      if(gleich==1){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ergebnis.append(stackStartPtr,neu);
         stelle=stellePruef;
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ergebnis.append(stackStartPtr,this->getAt(stackStartPtr,stelle));
         stelle++;
         }
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(stelle<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ergebnis.append(stackStartPtr,this->getAt(stackStartPtr,stelle));
      stelle++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   
   
} //End Of Method

void String_32::getKey(char* stackStartPtr,SPRSmartPtr<String_32> key){
   char SPR_stack_dummy_var;
   key=this;
   
   
} //End Of Method

int String_32::compare(char* stackStartPtr,String_32& other){
   char SPR_stack_dummy_var;
   int equal;equal=1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->length(stackStartPtr)==other.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int l;l=this->length(stackStartPtr);
      int i;
      {//begin of SPR for statement
      i=0;
      while((i<l)&&(equal==1)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
            equal=0;
            
         }
         i++;
         
      
      }
      }//end of SPR for statement
      
   }
   return equal;
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch1a1;spr_intScratch1a1=i;chck_accs_p0(buf,spr_intScratch1a1,419)
   while((i<buf._theObject->_sz)&&(buf._theObject->_array[spr_intScratch1a1]!='\0')){
      int j;j=0;
      SPRStackArrayConcrete<char,100> temp;
             int spr_intScratch1a3;spr_intScratch1a3=i;chck_accs_p0(buf,spr_intScratch1a3,421)
      while((j<99)&&(i<buf._theObject->_sz)&&(buf._theObject->_array[spr_intScratch1a3]!='\0')){
                int spr_intScratch1a5;spr_intScratch1a5=j;chck_accs0(temp,spr_intScratch1a5,423)
                int spr_intScratch1a7;spr_intScratch1a7=i;chck_accs_p0(buf,spr_intScratch1a7,425)
         temp._array[spr_intScratch1a5]=buf._theObject->_array[spr_intScratch1a7];
         j=j+1;
         i=i+1;
         spr_intScratch1a3=i;chck_accs_p0(buf,spr_intScratch1a3,421)
         
      };
             int spr_intScratch1a9;spr_intScratch1a9=j;chck_accs0(temp,spr_intScratch1a9,427)
      temp._array[spr_intScratch1a9]='\0';
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,temp);
      spr_intScratch1a1=i;chck_accs_p0(buf,spr_intScratch1a1,419)
      
   };
   
   
} //End Of Method

double String_32::asDouble(char* stackStartPtr){
   char SPR_stack_dummy_var;
   double ret;
   if(_extendedBuf!=0U){
      
                       ret=atof(_extendedBuf._theObject->_array);
                     
      
   }
   else
   {
   
                       ret=atof(_preAllocBuf._array);
                     
      }
   return ret;
   
   
} //End Of Method

void String_32::assign(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,str);
   
   
} //End Of Method

void String_32::assign(char* stackStartPtr,String_32& anderer){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,anderer);
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch1ab;spr_intScratch1ab=i;chck_accs0(str,spr_intScratch1ab,429)
   while(str._array[spr_intScratch1ab]!='\0'){
      i=i+1;
      spr_intScratch1ab=i;chck_accs0(str,spr_intScratch1ab,429)
      
   };
   if(_extendedBuf!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int l;l=this->length(stackStartPtr);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int cap;cap=this->capacity(stackStartPtr)-1;
      int diff;diff=cap-l;
      if(diff<i){
         int spr_intScratch1ad;
         spr_intScratch1ad=(l+i)*2;
         if(spr_intScratch1ad<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch1ad) SPRArray<char>(spr_intScratch1ad)
         ;
         int j;j=0;
         while(j<l){
                   int spr_intScratch1ae;spr_intScratch1ae=j;chck_accs_p0(newBuf,spr_intScratch1ae,432)
                   int spr_intScratch1b0;spr_intScratch1b0=j;chck_accs_p0(_extendedBuf,spr_intScratch1b0,434)
            newBuf._theObject->_array[spr_intScratch1ae]=_extendedBuf._theObject->_array[spr_intScratch1b0];
            j=j+1;
            
         };
         int newLength;newLength=l+i;
         while(j<newLength){
                   int spr_intScratch1b2;spr_intScratch1b2=j;chck_accs_p0(newBuf,spr_intScratch1b2,436)
                   int spr_intScratch1b4;spr_intScratch1b4=j-l;chck_accs0(str,spr_intScratch1b4,438)
            newBuf._theObject->_array[spr_intScratch1b2]=str._array[spr_intScratch1b4];
            j=j+1;
            
         };
                int spr_intScratch1b6;spr_intScratch1b6=j;chck_accs_p0(newBuf,spr_intScratch1b6,440)
         newBuf._theObject->_array[spr_intScratch1b6]='\0';
         _extendedBuf=newBuf;
         _length=newLength;
         
      }
      int diff2;diff2=diff+1;
      if(diff2>i){
         int j;
         int newLength;newLength=l+i;
         j=l;
         while(j<newLength){
                   int spr_intScratch1b8;spr_intScratch1b8=j;chck_accs_p0(_extendedBuf,spr_intScratch1b8,442)
                   int spr_intScratch1ba;spr_intScratch1ba=j-l;chck_accs0(str,spr_intScratch1ba,444)
            _extendedBuf._theObject->_array[spr_intScratch1b8]=str._array[spr_intScratch1ba];
            j=j+1;
            
         };
                int spr_intScratch1bc;spr_intScratch1bc=j;chck_accs_p0(_extendedBuf,spr_intScratch1bc,446)
         _extendedBuf._theObject->_array[spr_intScratch1bc]='\0';
         _length=newLength;
         
      }
      
   }
   if(_extendedBuf==0U){
      int freeSpace;freeSpace=_preAllocBuf._sz-_length-1;
      int useExt;useExt=0;
      if(i>freeSpace){
         int spr_intScratch1be;
         spr_intScratch1be=(_length+i)*2;
         if(spr_intScratch1be<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch1be) SPRArray<char>(spr_intScratch1be)
         ;
         int ii;ii=0;
         while(ii<_length){
                   int spr_intScratch1bf;spr_intScratch1bf=ii;chck_accs_p0(_extendedBuf,spr_intScratch1bf,449)
                   int spr_intScratch1c1;spr_intScratch1c1=ii;chck_accs0(_preAllocBuf,spr_intScratch1c1,451)
            _extendedBuf._theObject->_array[spr_intScratch1bf]=_preAllocBuf._array[spr_intScratch1c1];
            ii=ii+1;
            
         };
         int newLength;newLength=_length+i;
         while(ii<newLength){
                   int spr_intScratch1c3;spr_intScratch1c3=ii;chck_accs_p0(_extendedBuf,spr_intScratch1c3,453)
                   int spr_intScratch1c5;spr_intScratch1c5=ii-_length;chck_accs0(str,spr_intScratch1c5,455)
            _extendedBuf._theObject->_array[spr_intScratch1c3]=str._array[spr_intScratch1c5];
            ii=ii+1;
            
         };
                int spr_intScratch1c7;spr_intScratch1c7=ii;chck_accs_p0(_extendedBuf,spr_intScratch1c7,457)
         _extendedBuf._theObject->_array[spr_intScratch1c7]='\0';
                int spr_intScratch1c9;spr_intScratch1c9=0;chck_accs0(_preAllocBuf,spr_intScratch1c9,459)
         _preAllocBuf._array[spr_intScratch1c9]='\0';
         _length=newLength;
         useExt=1;
         
      }
      if(useExt==0){
         int k;k=0;
                int spr_intScratch1cb;spr_intScratch1cb=k;chck_accs0(str,spr_intScratch1cb,461)
         while(str._array[spr_intScratch1cb]!='\0'){
                   int spr_intScratch1cd;spr_intScratch1cd=_length;chck_accs0(_preAllocBuf,spr_intScratch1cd,463)
                   int spr_intScratch1cf;spr_intScratch1cf=k;chck_accs0(str,spr_intScratch1cf,465)
            _preAllocBuf._array[spr_intScratch1cd]=str._array[spr_intScratch1cf];
            _length=_length+1;
            k=k+1;
            spr_intScratch1cb=k;chck_accs0(str,spr_intScratch1cb,461)
            
         };
                int spr_intScratch1d1;spr_intScratch1d1=_length;chck_accs0(_preAllocBuf,spr_intScratch1d1,467)
         _preAllocBuf._array[spr_intScratch1d1]='\0';
         
      }
      
   }
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,2> buf;
          int spr_intScratch1d3;spr_intScratch1d3=1;chck_accs0(buf,spr_intScratch1d3,469)
   buf._array[spr_intScratch1d3]='\0';
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch1d5;spr_intScratch1d5=0;chck_accs0(buf,spr_intScratch1d5,471)
             int spr_intScratch1d7;spr_intScratch1d7=i+pos;chck_accs0(str,spr_intScratch1d7,473)
      buf._array[spr_intScratch1d5]=str._array[spr_intScratch1d7];
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf);
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_32::length(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;i=0;
   return _length;
   
   
} //End Of Method

void String_32::print(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf==0U){
             int spr_intScratch1d9;spr_intScratch1d9=_preAllocBuf._sz-1;chck_accs0(_preAllocBuf,spr_intScratch1d9,475)
      _preAllocBuf._array[spr_intScratch1d9]='\0';
      printf("%s\n",_preAllocBuf._array);
      
   }
   if(_extendedBuf!=0U){
             int spr_intScratch1db;spr_intScratch1db=_extendedBuf._theObject->_sz-1;chck_accs_p0(_extendedBuf,spr_intScratch1db,477)
      _extendedBuf._theObject->_array[spr_intScratch1db]='\0';
      printf("%s\n",_extendedBuf._theObject->_array);
      
   }
   
   
} //End Of Method

void String_32::printNoLF(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf==0U){
             int spr_intScratch1dd;spr_intScratch1dd=_preAllocBuf._sz-1;chck_accs0(_preAllocBuf,spr_intScratch1dd,479)
      _preAllocBuf._array[spr_intScratch1dd]='\0';
      printf("%s",_preAllocBuf._array);
      
   }
   if(_extendedBuf!=0U){
             int spr_intScratch1df;spr_intScratch1df=_extendedBuf._theObject->_sz-1;chck_accs_p0(_extendedBuf,spr_intScratch1df,481)
      _extendedBuf._theObject->_array[spr_intScratch1df]='\0';
      printf("%s",_extendedBuf._theObject->_array);
      
   }
   
   
} //End Of Method

int String_32::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch1e1;spr_intScratch1e1=l;chck_accs0(str,spr_intScratch1e1,483)
   while(str._array[spr_intScratch1e1]!='\0'){
      l=l+1;
      spr_intScratch1e1=l;chck_accs0(str,spr_intScratch1e1,483)
      
   };
   return l;
   
   
} //End Of Method

void String_32::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch1e3;spr_intScratch1e3=0;chck_accs_p0(_extendedBuf,spr_intScratch1e3,485)
      _extendedBuf._theObject->_array[spr_intScratch1e3]='\0';
      
   }
          int spr_intScratch1e5;spr_intScratch1e5=0;chck_accs0(_preAllocBuf,spr_intScratch1e5,487)
   _preAllocBuf._array[spr_intScratch1e5]='\0';
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,String_32& other){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int newLength;newLength=_length+other.length(stackStartPtr);
   if(_extendedBuf!=0U){
      int freeCap;freeCap=_extendedBuf._theObject->_sz-1-_length;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(freeCap<other.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         int newCap;newCap=2*(_length+other.length(stackStartPtr));
         int spr_intScratch1e7;
         spr_intScratch1e7=newCap;
         if(spr_intScratch1e7<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<char> > targetBuf;targetBuf=new(spr_intScratch1e7) SPRArray<char>(spr_intScratch1e7)
         ;
         {//begin of SPR for statement
         int i;i=0;
         while(i<_length){
                   int spr_intScratch1e8;spr_intScratch1e8=i;chck_accs_p0(targetBuf,spr_intScratch1e8,490)
                   int spr_intScratch1ea;spr_intScratch1ea=i;chck_accs_p0(_extendedBuf,spr_intScratch1ea,492)
            targetBuf._theObject->_array[spr_intScratch1e8]=_extendedBuf._theObject->_array[spr_intScratch1ea];
            i++;
            
         
         }
         }//end of SPR for statement
         _extendedBuf=targetBuf;
         
      }
      if(other._extendedBuf!=0U){
         {//begin of SPR for statement
         int i;i=_length;
         while(i<newLength){
                   int spr_intScratch1ec;spr_intScratch1ec=i;chck_accs_p0(_extendedBuf,spr_intScratch1ec,494)
                   int spr_intScratch1ee;spr_intScratch1ee=i-_length;chck_accs_p0(other._extendedBuf,spr_intScratch1ee,496)
            _extendedBuf._theObject->_array[spr_intScratch1ec]=other._extendedBuf._theObject->_array[spr_intScratch1ee];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      {//begin of SPR for statement
         int i;i=_length;
         while(i<newLength){
                   int spr_intScratch1f0;spr_intScratch1f0=i;chck_accs_p0(_extendedBuf,spr_intScratch1f0,498)
                   int spr_intScratch1f2;spr_intScratch1f2=i-_length;chck_accs0(other._preAllocBuf,spr_intScratch1f2,500)
            _extendedBuf._theObject->_array[spr_intScratch1f0]=other._preAllocBuf._array[spr_intScratch1f2];
            i++;
            
         
         }
         }//end of SPR for statement
         }
             int spr_intScratch1f4;spr_intScratch1f4=newLength;chck_accs_p0(_extendedBuf,spr_intScratch1f4,502)
      _extendedBuf._theObject->_array[spr_intScratch1f4]='\0';
      
   }
   else
   {
   int freeCap;freeCap=_preAllocBuf._sz-1-_length;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(freeCap<other.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         int newCap;newCap=2*(_length+other.length(stackStartPtr));
         int spr_intScratch1f6;
         spr_intScratch1f6=newCap;
         if(spr_intScratch1f6<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<char> > targetBuf;targetBuf=new(spr_intScratch1f6) SPRArray<char>(spr_intScratch1f6)
         ;
         {//begin of SPR for statement
         int i;i=0;
         while(i<_length){
                   int spr_intScratch1f7;spr_intScratch1f7=i;chck_accs_p0(targetBuf,spr_intScratch1f7,505)
                   int spr_intScratch1f9;spr_intScratch1f9=i;chck_accs0(_preAllocBuf,spr_intScratch1f9,507)
            targetBuf._theObject->_array[spr_intScratch1f7]=_preAllocBuf._array[spr_intScratch1f9];
            i++;
            
         
         }
         }//end of SPR for statement
         _extendedBuf=targetBuf;
         if(other._extendedBuf!=0U){
            {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch1fb;spr_intScratch1fb=i;chck_accs_p0(_extendedBuf,spr_intScratch1fb,509)
                      int spr_intScratch1fd;spr_intScratch1fd=i-_length;chck_accs_p0(other._extendedBuf,spr_intScratch1fd,511)
               _extendedBuf._theObject->_array[spr_intScratch1fb]=other._extendedBuf._theObject->_array[spr_intScratch1fd];
               i++;
               
            
            }
            }//end of SPR for statement
            
         }
         else
         {
         {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch1ff;spr_intScratch1ff=i;chck_accs_p0(_extendedBuf,spr_intScratch1ff,513)
                      int spr_intScratch201;spr_intScratch201=i-_length;chck_accs0(other._preAllocBuf,spr_intScratch201,515)
               _extendedBuf._theObject->_array[spr_intScratch1ff]=other._preAllocBuf._array[spr_intScratch201];
               i++;
               
            
            }
            }//end of SPR for statement
            }
         
      }
      else
      {
      if(other._extendedBuf!=0U){
            {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch203;spr_intScratch203=i;chck_accs0(_preAllocBuf,spr_intScratch203,517)
                      int spr_intScratch205;spr_intScratch205=i-_length;chck_accs_p0(other._extendedBuf,spr_intScratch205,519)
               _preAllocBuf._array[spr_intScratch203]=other._extendedBuf._theObject->_array[spr_intScratch205];
               i++;
               
            
            }
            }//end of SPR for statement
            
         }
         else
         {
         {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch207;spr_intScratch207=i;chck_accs0(_preAllocBuf,spr_intScratch207,521)
                      int spr_intScratch209;spr_intScratch209=i-_length;chck_accs0(other._preAllocBuf,spr_intScratch209,523)
               _preAllocBuf._array[spr_intScratch207]=other._preAllocBuf._array[spr_intScratch209];
               i++;
               
            
            }
            }//end of SPR for statement
            }
                int spr_intScratch20b;spr_intScratch20b=newLength;chck_accs0(_preAllocBuf,spr_intScratch20b,525)
         _preAllocBuf._array[spr_intScratch20b]='\0';
         }
      }
   _length=newLength;
   
   
} //End Of Method

void String_32::clearAndReclaimMemory(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
      _extendedBuf=0U;
      
   }
   if(_extendedBuf==0U){
             int spr_intScratch20d;spr_intScratch20d=0;chck_accs0(_preAllocBuf,spr_intScratch20d,527)
      _preAllocBuf._array[spr_intScratch20d]='\0';
      
   }
   
   
} //End Of Method

int String_32::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int ls;ls=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ls=this->lengthOf(stackStartPtr,str);
   int lsp1;lsp1=ls+1;
   if(_extendedBuf!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ls!=this->length(stackStartPtr)){
         return 1;
         
      }
      int i;i=0;
      while(i<lsp1){
                int spr_intScratch20f;spr_intScratch20f=i;chck_accs0(str,spr_intScratch20f,529)
                int spr_intScratch211;spr_intScratch211=i;chck_accs_p0(_extendedBuf,spr_intScratch211,531)
         if(str._array[spr_intScratch20f]!=_extendedBuf._theObject->_array[spr_intScratch211]){
            return 1;
            
         }
         i=i+1;
         
      };
      
   }
   if(_extendedBuf==0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ls!=this->length(stackStartPtr)){
         return 1;
         
      }
      int i;i=0;
      while(i<lsp1){
                int spr_intScratch213;spr_intScratch213=i;chck_accs0(str,spr_intScratch213,533)
                int spr_intScratch215;spr_intScratch215=i;chck_accs0(_preAllocBuf,spr_intScratch215,535)
         if(str._array[spr_intScratch213]!=_preAllocBuf._array[spr_intScratch215]){
            return 1;
            
         }
         i=i+1;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,2> buf;
          int spr_intScratch217;spr_intScratch217=0;chck_accs0(buf,spr_intScratch217,537)
   buf._array[spr_intScratch217]=c;
          int spr_intScratch219;spr_intScratch219=1;chck_accs0(buf,spr_intScratch219,539)
   buf._array[spr_intScratch219]='\0';
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,buf);
   
   
} //End Of Method

char String_32::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch21b;spr_intScratch21b=i;chck_accs_p0(_extendedBuf,spr_intScratch21b,541)
      return _extendedBuf._theObject->_array[spr_intScratch21b];
      
   }
   else
   {
          int spr_intScratch21d;spr_intScratch21d=i;chck_accs0(_preAllocBuf,spr_intScratch21d,543)
      return _preAllocBuf._array[spr_intScratch21d];
      }
   return '0';
   
   
} //End Of Method

void String_32::getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBufRet){
   char SPR_stack_dummy_var;
   extendedBufRet=_extendedBuf;
   
   
} //End Of Method

String_32::~String_32(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _extendedBuf=0U;
   _length=-13;
   
   
} //End Of Method

void String_32::rightOf(char* stackStartPtr,char divider,String_32& oStr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int zeiger;zeiger=this->length(stackStartPtr)-1;
   int fertig;fertig=0;
   while((zeiger>=0)&&(fertig==0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char zeichen;zeichen=this->getAt(stackStartPtr,zeiger);
      if(zeichen==divider){
         fertig=1;
         
      }
      else
      {
      zeiger=zeiger-1;
         }
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   oStr.clear(stackStartPtr);
   {//begin of SPR for statement
   int i;i=zeiger+1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_32::equals(char* stackStartPtr,String_32& other){
   char SPR_stack_dummy_var;
   int equal;equal=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l!=other.length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
         return 0;
         
      }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_32::equals(char* stackStartPtr,SPRStackArray<char>& other){
   char SPR_stack_dummy_var;
   int lother;lother=0;
          int spr_intScratch21f;spr_intScratch21f=lother;chck_accs0(other,spr_intScratch21f,545)
   while((lother<other._sz)&&(other._array[spr_intScratch21f]!='\0')){
      lother++;
      spr_intScratch21f=lother;chck_accs0(other,spr_intScratch21f,545)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch221;spr_intScratch221=i;chck_accs0(other,spr_intScratch221,547)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch221]){
         return 0;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,SPRSmartPtr<String_32> other){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<other._theObject->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,other._theObject->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_32::append(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,16> buf;
          int spr_intScratch223;spr_intScratch223=0;chck_accs0(buf,spr_intScratch223,549)
   buf._array[spr_intScratch223]='\0';
    sprintf(buf._array,"%i",x); 
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,buf);
   
   
} //End Of Method

void String_32::toCharArray(char* stackStartPtr,SPRStackArray<char>& feld){
   char SPR_stack_dummy_var;
   int szm1;szm1=feld._sz-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(szm1<this->length(stackStartPtr)){
             int spr_intScratch225;spr_intScratch225=0;chck_accs0(feld,spr_intScratch225,551)
      feld._array[spr_intScratch225]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch227;spr_intScratch227=i;chck_accs0(feld,spr_intScratch227,553)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch227]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch229;spr_intScratch229=i;chck_accs0(feld,spr_intScratch229,555)
   feld._array[spr_intScratch229]='\0';
   
   
} //End Of Method

int String_32::asNumber(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->asNumber(stackStartPtr,10);
   
   
} //End Of Method

int String_32::asNumber(char* stackStartPtr,int radix){
   char SPR_stack_dummy_var;
   int ret;ret=0;
   int isNegative;isNegative=0;
   int idx;idx=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->getAt(stackStartPtr,0)=='-'){
      isNegative=1;
      idx=1;
      
   }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(idx<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,idx);
      switch(c){
         case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'0');
            
         };break;
         
         case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'a')+10;
            
         };break;
         
         case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'A')+10;
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            idx=this->length(stackStartPtr);
            
         };
         
      }
      idx++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if(isNegative==1){
      ret=-1*ret;
      
   }
   return ret;
   
   
} //End Of Method

void String_32::escape(char* stackStartPtr,String_32& escaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_32::deEscape(char* stackStartPtr,String_32& deescaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,this->getAt(stackStartPtr,i));
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_32::endsWith(char* stackStartPtr,SPRStackArray<char>& end){
   char SPR_stack_dummy_var;
   int j;j=0;
          int spr_intScratch22b;spr_intScratch22b=j;chck_accs0(end,spr_intScratch22b,557)
   while((end._array[spr_intScratch22b]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch22b=j;chck_accs0(end,spr_intScratch22b,557)
      
   };
   if(j<=0){
      return -1;
      
   }
   else
   {
   j=j-1;
      }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int i;i=this->length(stackStartPtr)-1;
   while((i>=0)&&(j>=0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
             int spr_intScratch22d;spr_intScratch22d=j;chck_accs0(end,spr_intScratch22d,559)
      if(c!=end._array[spr_intScratch22d]){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_32::endsWith(char* stackStartPtr,String_16& str2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(str2.length(stackStartPtr)>this->length(stackStartPtr)){
      return 0;
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p;p=str2.length(stackStartPtr)-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p2;p2=this->length(stackStartPtr)-1;
   {//begin of SPR for statement
   int i;i=p;
   int j;j=p2;
   while(i>0){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(str2.getAt(stackStartPtr,i)!=this->getAt(stackStartPtr,j)){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_32::startsWith(char* stackStartPtr,SPRStackArray<char>& buf){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->lengthOf(stackStartPtr,buf);
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l>this->length(stackStartPtr)){
      return 0;
      
   }
          int spr_intScratch22f;spr_intScratch22f=i;chck_accs0(buf,spr_intScratch22f,561)
   while((i<l)&&(buf._array[spr_intScratch22f]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch231;spr_intScratch231=i;chck_accs0(buf,spr_intScratch231,563)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch231]){
         return 0;
         
      }
      i++;
      spr_intScratch22f=i;chck_accs0(buf,spr_intScratch22f,561)
      
   };
   return 1;
   
   
} //End Of Method

void String_32::subString(char* stackStartPtr,String_32& oStr,int start,int end){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=start;
   while(i<=end){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_32::isNumberChar(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   switch(c){
      case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
         return 1;
         
      };
      default:{
         return 0;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

int String_32::hashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int hc;
   if(_extendedBuf==0U){
       
                       hc = suchoi(_preAllocBuf._array,_length);
                     
      
   }
   else
   {
    
                       hc = suchoi(_extendedBuf._theObject->_array,_length);
                     
      }
   return hc;
   
   
} //End Of Method

int String_32::getHashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->hashCode(stackStartPtr);
   
   
} //End Of Method

void String_32::unitTest(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   if(1==1){
      SPRStackArrayConcrete<char,4> spr_StringScratch233;strcpy(spr_StringScratch233._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_32 s1(stackStartPtr,spr_StringScratch233);
      SPRStackArrayConcrete<char,4> spr_StringScratch234;strcpy(spr_StringScratch234._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_32 s2(stackStartPtr,spr_StringScratch234);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,6> spr_StringScratch235;strcpy(spr_StringScratch235._array,"aaaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch236;strcpy(spr_StringScratch236._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=4)||(s1.equals(stackStartPtr,spr_StringScratch235)!=1)||(s1.equals(stackStartPtr,spr_StringScratch236)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch237;strcpy(spr_StringScratch237._array,"String unittest fail # 1");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch237).pr(stackStartPtr);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.clear(stackStartPtr);
      SPRStackArrayConcrete<char,21> spr_StringScratch238;strcpy(spr_StringScratch238._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,spr_StringScratch238);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch239;strcpy(spr_StringScratch239._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch23a;strcpy(spr_StringScratch23a._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch239)!=1)||(s1.equals(stackStartPtr,spr_StringScratch23a)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch23b;strcpy(spr_StringScratch23b._array,"String unittest fail # 2");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch23b).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,4> spr_StringScratch23c;strcpy(spr_StringScratch23c._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_32 s1(stackStartPtr,spr_StringScratch23c);
      String_32 s2;
      SPRStackArrayConcrete<char,21> spr_StringScratch23d;strcpy(spr_StringScratch23d._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,spr_StringScratch23d);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,s1);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch23e;strcpy(spr_StringScratch23e._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch23f;strcpy(spr_StringScratch23f._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s2.length(stackStartPtr)!=21)||(s2.equals(stackStartPtr,spr_StringScratch23e)!=1)||(s2.equals(stackStartPtr,spr_StringScratch23f)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch240;strcpy(spr_StringScratch240._array,"String unittest fail # 3");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch240).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch241;strcpy(spr_StringScratch241._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_32 s1(stackStartPtr,spr_StringScratch241);
      SPRStackArrayConcrete<char,3> spr_StringScratch242;strcpy(spr_StringScratch242._array,"b");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_32 s2(stackStartPtr,spr_StringScratch242);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,13> spr_StringScratch243;strcpy(spr_StringScratch243._array,"abbbbbbbbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch244;strcpy(spr_StringScratch244._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=11)||(s1.equals(stackStartPtr,spr_StringScratch243)!=1)||(s1.equals(stackStartPtr,spr_StringScratch244)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch245;strcpy(spr_StringScratch245._array,"String unittest fail # 4");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch245).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch246;strcpy(spr_StringScratch246._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_32 s1(stackStartPtr,spr_StringScratch246);
      SPRStackArrayConcrete<char,4> spr_StringScratch247;strcpy(spr_StringScratch247._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_32 s2(stackStartPtr,spr_StringScratch247);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch248;strcpy(spr_StringScratch248._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch249;strcpy(spr_StringScratch249._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch248)!=1)||(s1.equals(stackStartPtr,spr_StringScratch249)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch24a;strcpy(spr_StringScratch24a._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch24a).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch24b;strcpy(spr_StringScratch24b._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_32 s1(stackStartPtr,spr_StringScratch24b);
      SPRStackArrayConcrete<char,4> spr_StringScratch24c;strcpy(spr_StringScratch24c._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_32 s2(stackStartPtr,spr_StringScratch24c);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch24d;strcpy(spr_StringScratch24d._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch24e;strcpy(spr_StringScratch24e._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch24d)!=1)||(s1.equals(stackStartPtr,spr_StringScratch24e)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch24f;strcpy(spr_StringScratch24f._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch24f).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratch250;strcpy(spr_StringScratch250._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_32 s1(stackStartPtr,spr_StringScratch250);
      SPRStackArrayConcrete<char,4> spr_StringScratch251;strcpy(spr_StringScratch251._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_32 s2(stackStartPtr,spr_StringScratch251);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,43> spr_StringScratch252;strcpy(spr_StringScratch252._array,"acccccccccccccccccccccccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch253;strcpy(spr_StringScratch253._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=41)||(s1.equals(stackStartPtr,spr_StringScratch252)!=1)||(s1.equals(stackStartPtr,spr_StringScratch253)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch254;strcpy(spr_StringScratch254._array,"String unittest fail # 7");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch254).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratch255;strcpy(spr_StringScratch255._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_32 s1(stackStartPtr,spr_StringScratch255);
      SPRStackArrayConcrete<char,23> spr_StringScratch256;strcpy(spr_StringScratch256._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_32 s2(stackStartPtr,spr_StringScratch256);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      int expLength;expLength=10*21+21;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch257;strcpy(spr_StringScratch257._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=expLength)||(s1.equals(stackStartPtr,spr_StringScratch257)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch258;strcpy(spr_StringScratch258._array,"String unittest fail # 8");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch258).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      String_16 ext;
      SPRStackArrayConcrete<char,14> spr_StringScratch259;strcpy(spr_StringScratch259._array,"/home/x.docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 filename(stackStartPtr,spr_StringScratch259);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'/',ext);
      SPRStackArrayConcrete<char,3> spr_StringScratch25a;strcpy(spr_StringScratch25a._array,"$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch25a).sa(stackStartPtr,ext).pr(stackStartPtr);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,3> spr_StringScratch25b;strcpy(spr_StringScratch25b._array,"$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch25b).sa(stackStartPtr,ext).pr(stackStartPtr);
      SPRStackArrayConcrete<char,15> spr_StringScratch25c;strcpy(spr_StringScratch25c._array,"/tmp/abc.html");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.assign(stackStartPtr,spr_StringScratch25c);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,3> spr_StringScratch25d;strcpy(spr_StringScratch25d._array,"$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch25d).sa(stackStartPtr,ext).pr(stackStartPtr);
      
   }
   
   
} //End Of Method

int Hash_String_32::hash(char* stackStartPtr,String_32& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return str.getHashCode(stackStartPtr);
   
   
} //End Of Method

int Compare_String_32::compare(char* stackStartPtr,String_32& s1,String_32& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(s1.equals(stackStartPtr,s2)==1){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void Assigner_String_32::assign(char* stackStartPtr,String_32& s1,String_32& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.append(stackStartPtr,s2);
   
   
} //End Of Method

String_64::String_64(char* stackStartPtr,SPRStackArray<char>& init){
   char SPR_stack_dummy_var;
   _length=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,init);
   
   
} //End Of Method

String_64::String_64(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _length=0;
   SPRStackArrayConcrete<char,2> spr_StringScratch25e;strcpy(spr_StringScratch25e._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch25e);
   
   
} //End Of Method

int String_64::capacity(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
      return _extendedBuf._theObject->_sz;
      
   }
   return _preAllocBuf._sz;
   
   
} //End Of Method

void String_64::ersetzen(char* stackStartPtr,String_64& alt,String_64& neu,String_64& ergebnis){
   char SPR_stack_dummy_var;
   int stelle;stelle=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int ende;ende=this->length(stackStartPtr)-alt.length(stackStartPtr);
   while(stelle<ende){
      int j;j=0;
      int gleich;gleich=1;
      int stellePruef;stellePruef=stelle;
      {//begin of SPR for statement
      j=0;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while(j<alt.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->getAt(stackStartPtr,stellePruef)!=alt.getAt(stackStartPtr,j)){
            gleich=0;
            
         }
         stellePruef++;
         j++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      
      }
      }//end of SPR for statement
      if(gleich==1){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ergebnis.append(stackStartPtr,neu);
         stelle=stellePruef;
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ergebnis.append(stackStartPtr,this->getAt(stackStartPtr,stelle));
         stelle++;
         }
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(stelle<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ergebnis.append(stackStartPtr,this->getAt(stackStartPtr,stelle));
      stelle++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   
   
} //End Of Method

void String_64::getKey(char* stackStartPtr,SPRSmartPtr<String_64> key){
   char SPR_stack_dummy_var;
   key=this;
   
   
} //End Of Method

int String_64::compare(char* stackStartPtr,String_64& other){
   char SPR_stack_dummy_var;
   int equal;equal=1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->length(stackStartPtr)==other.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int l;l=this->length(stackStartPtr);
      int i;
      {//begin of SPR for statement
      i=0;
      while((i<l)&&(equal==1)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
            equal=0;
            
         }
         i++;
         
      
      }
      }//end of SPR for statement
      
   }
   return equal;
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch25f;spr_intScratch25f=i;chck_accs_p0(buf,spr_intScratch25f,609)
   while((i<buf._theObject->_sz)&&(buf._theObject->_array[spr_intScratch25f]!='\0')){
      int j;j=0;
      SPRStackArrayConcrete<char,100> temp;
             int spr_intScratch261;spr_intScratch261=i;chck_accs_p0(buf,spr_intScratch261,611)
      while((j<99)&&(i<buf._theObject->_sz)&&(buf._theObject->_array[spr_intScratch261]!='\0')){
                int spr_intScratch263;spr_intScratch263=j;chck_accs0(temp,spr_intScratch263,613)
                int spr_intScratch265;spr_intScratch265=i;chck_accs_p0(buf,spr_intScratch265,615)
         temp._array[spr_intScratch263]=buf._theObject->_array[spr_intScratch265];
         j=j+1;
         i=i+1;
         spr_intScratch261=i;chck_accs_p0(buf,spr_intScratch261,611)
         
      };
             int spr_intScratch267;spr_intScratch267=j;chck_accs0(temp,spr_intScratch267,617)
      temp._array[spr_intScratch267]='\0';
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,temp);
      spr_intScratch25f=i;chck_accs_p0(buf,spr_intScratch25f,609)
      
   };
   
   
} //End Of Method

double String_64::asDouble(char* stackStartPtr){
   char SPR_stack_dummy_var;
   double ret;
   if(_extendedBuf!=0U){
      
                       ret=atof(_extendedBuf._theObject->_array);
                     
      
   }
   else
   {
   
                       ret=atof(_preAllocBuf._array);
                     
      }
   return ret;
   
   
} //End Of Method

void String_64::assign(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,str);
   
   
} //End Of Method

void String_64::assign(char* stackStartPtr,String_64& anderer){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,anderer);
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch269;spr_intScratch269=i;chck_accs0(str,spr_intScratch269,619)
   while(str._array[spr_intScratch269]!='\0'){
      i=i+1;
      spr_intScratch269=i;chck_accs0(str,spr_intScratch269,619)
      
   };
   if(_extendedBuf!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int l;l=this->length(stackStartPtr);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int cap;cap=this->capacity(stackStartPtr)-1;
      int diff;diff=cap-l;
      if(diff<i){
         int spr_intScratch26b;
         spr_intScratch26b=(l+i)*2;
         if(spr_intScratch26b<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch26b) SPRArray<char>(spr_intScratch26b)
         ;
         int j;j=0;
         while(j<l){
                   int spr_intScratch26c;spr_intScratch26c=j;chck_accs_p0(newBuf,spr_intScratch26c,622)
                   int spr_intScratch26e;spr_intScratch26e=j;chck_accs_p0(_extendedBuf,spr_intScratch26e,624)
            newBuf._theObject->_array[spr_intScratch26c]=_extendedBuf._theObject->_array[spr_intScratch26e];
            j=j+1;
            
         };
         int newLength;newLength=l+i;
         while(j<newLength){
                   int spr_intScratch270;spr_intScratch270=j;chck_accs_p0(newBuf,spr_intScratch270,626)
                   int spr_intScratch272;spr_intScratch272=j-l;chck_accs0(str,spr_intScratch272,628)
            newBuf._theObject->_array[spr_intScratch270]=str._array[spr_intScratch272];
            j=j+1;
            
         };
                int spr_intScratch274;spr_intScratch274=j;chck_accs_p0(newBuf,spr_intScratch274,630)
         newBuf._theObject->_array[spr_intScratch274]='\0';
         _extendedBuf=newBuf;
         _length=newLength;
         
      }
      int diff2;diff2=diff+1;
      if(diff2>i){
         int j;
         int newLength;newLength=l+i;
         j=l;
         while(j<newLength){
                   int spr_intScratch276;spr_intScratch276=j;chck_accs_p0(_extendedBuf,spr_intScratch276,632)
                   int spr_intScratch278;spr_intScratch278=j-l;chck_accs0(str,spr_intScratch278,634)
            _extendedBuf._theObject->_array[spr_intScratch276]=str._array[spr_intScratch278];
            j=j+1;
            
         };
                int spr_intScratch27a;spr_intScratch27a=j;chck_accs_p0(_extendedBuf,spr_intScratch27a,636)
         _extendedBuf._theObject->_array[spr_intScratch27a]='\0';
         _length=newLength;
         
      }
      
   }
   if(_extendedBuf==0U){
      int freeSpace;freeSpace=_preAllocBuf._sz-_length-1;
      int useExt;useExt=0;
      if(i>freeSpace){
         int spr_intScratch27c;
         spr_intScratch27c=(_length+i)*2;
         if(spr_intScratch27c<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch27c) SPRArray<char>(spr_intScratch27c)
         ;
         int ii;ii=0;
         while(ii<_length){
                   int spr_intScratch27d;spr_intScratch27d=ii;chck_accs_p0(_extendedBuf,spr_intScratch27d,639)
                   int spr_intScratch27f;spr_intScratch27f=ii;chck_accs0(_preAllocBuf,spr_intScratch27f,641)
            _extendedBuf._theObject->_array[spr_intScratch27d]=_preAllocBuf._array[spr_intScratch27f];
            ii=ii+1;
            
         };
         int newLength;newLength=_length+i;
         while(ii<newLength){
                   int spr_intScratch281;spr_intScratch281=ii;chck_accs_p0(_extendedBuf,spr_intScratch281,643)
                   int spr_intScratch283;spr_intScratch283=ii-_length;chck_accs0(str,spr_intScratch283,645)
            _extendedBuf._theObject->_array[spr_intScratch281]=str._array[spr_intScratch283];
            ii=ii+1;
            
         };
                int spr_intScratch285;spr_intScratch285=ii;chck_accs_p0(_extendedBuf,spr_intScratch285,647)
         _extendedBuf._theObject->_array[spr_intScratch285]='\0';
                int spr_intScratch287;spr_intScratch287=0;chck_accs0(_preAllocBuf,spr_intScratch287,649)
         _preAllocBuf._array[spr_intScratch287]='\0';
         _length=newLength;
         useExt=1;
         
      }
      if(useExt==0){
         int k;k=0;
                int spr_intScratch289;spr_intScratch289=k;chck_accs0(str,spr_intScratch289,651)
         while(str._array[spr_intScratch289]!='\0'){
                   int spr_intScratch28b;spr_intScratch28b=_length;chck_accs0(_preAllocBuf,spr_intScratch28b,653)
                   int spr_intScratch28d;spr_intScratch28d=k;chck_accs0(str,spr_intScratch28d,655)
            _preAllocBuf._array[spr_intScratch28b]=str._array[spr_intScratch28d];
            _length=_length+1;
            k=k+1;
            spr_intScratch289=k;chck_accs0(str,spr_intScratch289,651)
            
         };
                int spr_intScratch28f;spr_intScratch28f=_length;chck_accs0(_preAllocBuf,spr_intScratch28f,657)
         _preAllocBuf._array[spr_intScratch28f]='\0';
         
      }
      
   }
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,2> buf;
          int spr_intScratch291;spr_intScratch291=1;chck_accs0(buf,spr_intScratch291,659)
   buf._array[spr_intScratch291]='\0';
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch293;spr_intScratch293=0;chck_accs0(buf,spr_intScratch293,661)
             int spr_intScratch295;spr_intScratch295=i+pos;chck_accs0(str,spr_intScratch295,663)
      buf._array[spr_intScratch293]=str._array[spr_intScratch295];
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf);
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_64::length(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;i=0;
   return _length;
   
   
} //End Of Method

void String_64::print(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf==0U){
             int spr_intScratch297;spr_intScratch297=_preAllocBuf._sz-1;chck_accs0(_preAllocBuf,spr_intScratch297,665)
      _preAllocBuf._array[spr_intScratch297]='\0';
      printf("%s\n",_preAllocBuf._array);
      
   }
   if(_extendedBuf!=0U){
             int spr_intScratch299;spr_intScratch299=_extendedBuf._theObject->_sz-1;chck_accs_p0(_extendedBuf,spr_intScratch299,667)
      _extendedBuf._theObject->_array[spr_intScratch299]='\0';
      printf("%s\n",_extendedBuf._theObject->_array);
      
   }
   
   
} //End Of Method

void String_64::printNoLF(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf==0U){
             int spr_intScratch29b;spr_intScratch29b=_preAllocBuf._sz-1;chck_accs0(_preAllocBuf,spr_intScratch29b,669)
      _preAllocBuf._array[spr_intScratch29b]='\0';
      printf("%s",_preAllocBuf._array);
      
   }
   if(_extendedBuf!=0U){
             int spr_intScratch29d;spr_intScratch29d=_extendedBuf._theObject->_sz-1;chck_accs_p0(_extendedBuf,spr_intScratch29d,671)
      _extendedBuf._theObject->_array[spr_intScratch29d]='\0';
      printf("%s",_extendedBuf._theObject->_array);
      
   }
   
   
} //End Of Method

int String_64::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch29f;spr_intScratch29f=l;chck_accs0(str,spr_intScratch29f,673)
   while(str._array[spr_intScratch29f]!='\0'){
      l=l+1;
      spr_intScratch29f=l;chck_accs0(str,spr_intScratch29f,673)
      
   };
   return l;
   
   
} //End Of Method

void String_64::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch2a1;spr_intScratch2a1=0;chck_accs_p0(_extendedBuf,spr_intScratch2a1,675)
      _extendedBuf._theObject->_array[spr_intScratch2a1]='\0';
      
   }
          int spr_intScratch2a3;spr_intScratch2a3=0;chck_accs0(_preAllocBuf,spr_intScratch2a3,677)
   _preAllocBuf._array[spr_intScratch2a3]='\0';
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,String_64& other){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int newLength;newLength=_length+other.length(stackStartPtr);
   if(_extendedBuf!=0U){
      int freeCap;freeCap=_extendedBuf._theObject->_sz-1-_length;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(freeCap<other.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         int newCap;newCap=2*(_length+other.length(stackStartPtr));
         int spr_intScratch2a5;
         spr_intScratch2a5=newCap;
         if(spr_intScratch2a5<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<char> > targetBuf;targetBuf=new(spr_intScratch2a5) SPRArray<char>(spr_intScratch2a5)
         ;
         {//begin of SPR for statement
         int i;i=0;
         while(i<_length){
                   int spr_intScratch2a6;spr_intScratch2a6=i;chck_accs_p0(targetBuf,spr_intScratch2a6,680)
                   int spr_intScratch2a8;spr_intScratch2a8=i;chck_accs_p0(_extendedBuf,spr_intScratch2a8,682)
            targetBuf._theObject->_array[spr_intScratch2a6]=_extendedBuf._theObject->_array[spr_intScratch2a8];
            i++;
            
         
         }
         }//end of SPR for statement
         _extendedBuf=targetBuf;
         
      }
      if(other._extendedBuf!=0U){
         {//begin of SPR for statement
         int i;i=_length;
         while(i<newLength){
                   int spr_intScratch2aa;spr_intScratch2aa=i;chck_accs_p0(_extendedBuf,spr_intScratch2aa,684)
                   int spr_intScratch2ac;spr_intScratch2ac=i-_length;chck_accs_p0(other._extendedBuf,spr_intScratch2ac,686)
            _extendedBuf._theObject->_array[spr_intScratch2aa]=other._extendedBuf._theObject->_array[spr_intScratch2ac];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      {//begin of SPR for statement
         int i;i=_length;
         while(i<newLength){
                   int spr_intScratch2ae;spr_intScratch2ae=i;chck_accs_p0(_extendedBuf,spr_intScratch2ae,688)
                   int spr_intScratch2b0;spr_intScratch2b0=i-_length;chck_accs0(other._preAllocBuf,spr_intScratch2b0,690)
            _extendedBuf._theObject->_array[spr_intScratch2ae]=other._preAllocBuf._array[spr_intScratch2b0];
            i++;
            
         
         }
         }//end of SPR for statement
         }
             int spr_intScratch2b2;spr_intScratch2b2=newLength;chck_accs_p0(_extendedBuf,spr_intScratch2b2,692)
      _extendedBuf._theObject->_array[spr_intScratch2b2]='\0';
      
   }
   else
   {
   int freeCap;freeCap=_preAllocBuf._sz-1-_length;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(freeCap<other.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         int newCap;newCap=2*(_length+other.length(stackStartPtr));
         int spr_intScratch2b4;
         spr_intScratch2b4=newCap;
         if(spr_intScratch2b4<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<char> > targetBuf;targetBuf=new(spr_intScratch2b4) SPRArray<char>(spr_intScratch2b4)
         ;
         {//begin of SPR for statement
         int i;i=0;
         while(i<_length){
                   int spr_intScratch2b5;spr_intScratch2b5=i;chck_accs_p0(targetBuf,spr_intScratch2b5,695)
                   int spr_intScratch2b7;spr_intScratch2b7=i;chck_accs0(_preAllocBuf,spr_intScratch2b7,697)
            targetBuf._theObject->_array[spr_intScratch2b5]=_preAllocBuf._array[spr_intScratch2b7];
            i++;
            
         
         }
         }//end of SPR for statement
         _extendedBuf=targetBuf;
         if(other._extendedBuf!=0U){
            {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch2b9;spr_intScratch2b9=i;chck_accs_p0(_extendedBuf,spr_intScratch2b9,699)
                      int spr_intScratch2bb;spr_intScratch2bb=i-_length;chck_accs_p0(other._extendedBuf,spr_intScratch2bb,701)
               _extendedBuf._theObject->_array[spr_intScratch2b9]=other._extendedBuf._theObject->_array[spr_intScratch2bb];
               i++;
               
            
            }
            }//end of SPR for statement
            
         }
         else
         {
         {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch2bd;spr_intScratch2bd=i;chck_accs_p0(_extendedBuf,spr_intScratch2bd,703)
                      int spr_intScratch2bf;spr_intScratch2bf=i-_length;chck_accs0(other._preAllocBuf,spr_intScratch2bf,705)
               _extendedBuf._theObject->_array[spr_intScratch2bd]=other._preAllocBuf._array[spr_intScratch2bf];
               i++;
               
            
            }
            }//end of SPR for statement
            }
         
      }
      else
      {
      if(other._extendedBuf!=0U){
            {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch2c1;spr_intScratch2c1=i;chck_accs0(_preAllocBuf,spr_intScratch2c1,707)
                      int spr_intScratch2c3;spr_intScratch2c3=i-_length;chck_accs_p0(other._extendedBuf,spr_intScratch2c3,709)
               _preAllocBuf._array[spr_intScratch2c1]=other._extendedBuf._theObject->_array[spr_intScratch2c3];
               i++;
               
            
            }
            }//end of SPR for statement
            
         }
         else
         {
         {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch2c5;spr_intScratch2c5=i;chck_accs0(_preAllocBuf,spr_intScratch2c5,711)
                      int spr_intScratch2c7;spr_intScratch2c7=i-_length;chck_accs0(other._preAllocBuf,spr_intScratch2c7,713)
               _preAllocBuf._array[spr_intScratch2c5]=other._preAllocBuf._array[spr_intScratch2c7];
               i++;
               
            
            }
            }//end of SPR for statement
            }
                int spr_intScratch2c9;spr_intScratch2c9=newLength;chck_accs0(_preAllocBuf,spr_intScratch2c9,715)
         _preAllocBuf._array[spr_intScratch2c9]='\0';
         }
      }
   _length=newLength;
   
   
} //End Of Method

void String_64::clearAndReclaimMemory(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
      _extendedBuf=0U;
      
   }
   if(_extendedBuf==0U){
             int spr_intScratch2cb;spr_intScratch2cb=0;chck_accs0(_preAllocBuf,spr_intScratch2cb,717)
      _preAllocBuf._array[spr_intScratch2cb]='\0';
      
   }
   
   
} //End Of Method

int String_64::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int ls;ls=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ls=this->lengthOf(stackStartPtr,str);
   int lsp1;lsp1=ls+1;
   if(_extendedBuf!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ls!=this->length(stackStartPtr)){
         return 1;
         
      }
      int i;i=0;
      while(i<lsp1){
                int spr_intScratch2cd;spr_intScratch2cd=i;chck_accs0(str,spr_intScratch2cd,719)
                int spr_intScratch2cf;spr_intScratch2cf=i;chck_accs_p0(_extendedBuf,spr_intScratch2cf,721)
         if(str._array[spr_intScratch2cd]!=_extendedBuf._theObject->_array[spr_intScratch2cf]){
            return 1;
            
         }
         i=i+1;
         
      };
      
   }
   if(_extendedBuf==0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ls!=this->length(stackStartPtr)){
         return 1;
         
      }
      int i;i=0;
      while(i<lsp1){
                int spr_intScratch2d1;spr_intScratch2d1=i;chck_accs0(str,spr_intScratch2d1,723)
                int spr_intScratch2d3;spr_intScratch2d3=i;chck_accs0(_preAllocBuf,spr_intScratch2d3,725)
         if(str._array[spr_intScratch2d1]!=_preAllocBuf._array[spr_intScratch2d3]){
            return 1;
            
         }
         i=i+1;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,2> buf;
          int spr_intScratch2d5;spr_intScratch2d5=0;chck_accs0(buf,spr_intScratch2d5,727)
   buf._array[spr_intScratch2d5]=c;
          int spr_intScratch2d7;spr_intScratch2d7=1;chck_accs0(buf,spr_intScratch2d7,729)
   buf._array[spr_intScratch2d7]='\0';
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,buf);
   
   
} //End Of Method

char String_64::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch2d9;spr_intScratch2d9=i;chck_accs_p0(_extendedBuf,spr_intScratch2d9,731)
      return _extendedBuf._theObject->_array[spr_intScratch2d9];
      
   }
   else
   {
          int spr_intScratch2db;spr_intScratch2db=i;chck_accs0(_preAllocBuf,spr_intScratch2db,733)
      return _preAllocBuf._array[spr_intScratch2db];
      }
   return '0';
   
   
} //End Of Method

void String_64::getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBufRet){
   char SPR_stack_dummy_var;
   extendedBufRet=_extendedBuf;
   
   
} //End Of Method

String_64::~String_64(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _extendedBuf=0U;
   _length=-13;
   
   
} //End Of Method

void String_64::rightOf(char* stackStartPtr,char divider,String_64& oStr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int zeiger;zeiger=this->length(stackStartPtr)-1;
   int fertig;fertig=0;
   while((zeiger>=0)&&(fertig==0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char zeichen;zeichen=this->getAt(stackStartPtr,zeiger);
      if(zeichen==divider){
         fertig=1;
         
      }
      else
      {
      zeiger=zeiger-1;
         }
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   oStr.clear(stackStartPtr);
   {//begin of SPR for statement
   int i;i=zeiger+1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_64::equals(char* stackStartPtr,String_64& other){
   char SPR_stack_dummy_var;
   int equal;equal=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l!=other.length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
         return 0;
         
      }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_64::equals(char* stackStartPtr,SPRStackArray<char>& other){
   char SPR_stack_dummy_var;
   int lother;lother=0;
          int spr_intScratch2dd;spr_intScratch2dd=lother;chck_accs0(other,spr_intScratch2dd,735)
   while((lother<other._sz)&&(other._array[spr_intScratch2dd]!='\0')){
      lother++;
      spr_intScratch2dd=lother;chck_accs0(other,spr_intScratch2dd,735)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch2df;spr_intScratch2df=i;chck_accs0(other,spr_intScratch2df,737)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch2df]){
         return 0;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,SPRSmartPtr<String_64> other){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<other._theObject->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,other._theObject->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_64::append(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,16> buf;
          int spr_intScratch2e1;spr_intScratch2e1=0;chck_accs0(buf,spr_intScratch2e1,739)
   buf._array[spr_intScratch2e1]='\0';
    sprintf(buf._array,"%i",x); 
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,buf);
   
   
} //End Of Method

void String_64::toCharArray(char* stackStartPtr,SPRStackArray<char>& feld){
   char SPR_stack_dummy_var;
   int szm1;szm1=feld._sz-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(szm1<this->length(stackStartPtr)){
             int spr_intScratch2e3;spr_intScratch2e3=0;chck_accs0(feld,spr_intScratch2e3,741)
      feld._array[spr_intScratch2e3]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch2e5;spr_intScratch2e5=i;chck_accs0(feld,spr_intScratch2e5,743)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch2e5]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch2e7;spr_intScratch2e7=i;chck_accs0(feld,spr_intScratch2e7,745)
   feld._array[spr_intScratch2e7]='\0';
   
   
} //End Of Method

int String_64::asNumber(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->asNumber(stackStartPtr,10);
   
   
} //End Of Method

int String_64::asNumber(char* stackStartPtr,int radix){
   char SPR_stack_dummy_var;
   int ret;ret=0;
   int isNegative;isNegative=0;
   int idx;idx=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->getAt(stackStartPtr,0)=='-'){
      isNegative=1;
      idx=1;
      
   }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(idx<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,idx);
      switch(c){
         case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'0');
            
         };break;
         
         case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'a')+10;
            
         };break;
         
         case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'A')+10;
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            idx=this->length(stackStartPtr);
            
         };
         
      }
      idx++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if(isNegative==1){
      ret=-1*ret;
      
   }
   return ret;
   
   
} //End Of Method

void String_64::escape(char* stackStartPtr,String_64& escaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_64::deEscape(char* stackStartPtr,String_64& deescaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,this->getAt(stackStartPtr,i));
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_64::endsWith(char* stackStartPtr,SPRStackArray<char>& end){
   char SPR_stack_dummy_var;
   int j;j=0;
          int spr_intScratch2e9;spr_intScratch2e9=j;chck_accs0(end,spr_intScratch2e9,747)
   while((end._array[spr_intScratch2e9]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch2e9=j;chck_accs0(end,spr_intScratch2e9,747)
      
   };
   if(j<=0){
      return -1;
      
   }
   else
   {
   j=j-1;
      }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int i;i=this->length(stackStartPtr)-1;
   while((i>=0)&&(j>=0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
             int spr_intScratch2eb;spr_intScratch2eb=j;chck_accs0(end,spr_intScratch2eb,749)
      if(c!=end._array[spr_intScratch2eb]){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_64::endsWith(char* stackStartPtr,String_16& str2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(str2.length(stackStartPtr)>this->length(stackStartPtr)){
      return 0;
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p;p=str2.length(stackStartPtr)-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p2;p2=this->length(stackStartPtr)-1;
   {//begin of SPR for statement
   int i;i=p;
   int j;j=p2;
   while(i>0){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(str2.getAt(stackStartPtr,i)!=this->getAt(stackStartPtr,j)){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_64::startsWith(char* stackStartPtr,SPRStackArray<char>& buf){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->lengthOf(stackStartPtr,buf);
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l>this->length(stackStartPtr)){
      return 0;
      
   }
          int spr_intScratch2ed;spr_intScratch2ed=i;chck_accs0(buf,spr_intScratch2ed,751)
   while((i<l)&&(buf._array[spr_intScratch2ed]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch2ef;spr_intScratch2ef=i;chck_accs0(buf,spr_intScratch2ef,753)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch2ef]){
         return 0;
         
      }
      i++;
      spr_intScratch2ed=i;chck_accs0(buf,spr_intScratch2ed,751)
      
   };
   return 1;
   
   
} //End Of Method

void String_64::subString(char* stackStartPtr,String_64& oStr,int start,int end){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=start;
   while(i<=end){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_64::isNumberChar(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   switch(c){
      case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
         return 1;
         
      };
      default:{
         return 0;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

int String_64::hashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int hc;
   if(_extendedBuf==0U){
       
                       hc = suchoi(_preAllocBuf._array,_length);
                     
      
   }
   else
   {
    
                       hc = suchoi(_extendedBuf._theObject->_array,_length);
                     
      }
   return hc;
   
   
} //End Of Method

int String_64::getHashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->hashCode(stackStartPtr);
   
   
} //End Of Method

void String_64::unitTest(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   if(1==1){
      SPRStackArrayConcrete<char,4> spr_StringScratch2f1;strcpy(spr_StringScratch2f1._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_64 s1(stackStartPtr,spr_StringScratch2f1);
      SPRStackArrayConcrete<char,4> spr_StringScratch2f2;strcpy(spr_StringScratch2f2._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_64 s2(stackStartPtr,spr_StringScratch2f2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,6> spr_StringScratch2f3;strcpy(spr_StringScratch2f3._array,"aaaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch2f4;strcpy(spr_StringScratch2f4._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=4)||(s1.equals(stackStartPtr,spr_StringScratch2f3)!=1)||(s1.equals(stackStartPtr,spr_StringScratch2f4)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch2f5;strcpy(spr_StringScratch2f5._array,"String unittest fail # 1");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch2f5).pr(stackStartPtr);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.clear(stackStartPtr);
      SPRStackArrayConcrete<char,21> spr_StringScratch2f6;strcpy(spr_StringScratch2f6._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,spr_StringScratch2f6);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch2f7;strcpy(spr_StringScratch2f7._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch2f8;strcpy(spr_StringScratch2f8._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch2f7)!=1)||(s1.equals(stackStartPtr,spr_StringScratch2f8)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch2f9;strcpy(spr_StringScratch2f9._array,"String unittest fail # 2");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch2f9).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,4> spr_StringScratch2fa;strcpy(spr_StringScratch2fa._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_64 s1(stackStartPtr,spr_StringScratch2fa);
      String_64 s2;
      SPRStackArrayConcrete<char,21> spr_StringScratch2fb;strcpy(spr_StringScratch2fb._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,spr_StringScratch2fb);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,s1);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch2fc;strcpy(spr_StringScratch2fc._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch2fd;strcpy(spr_StringScratch2fd._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s2.length(stackStartPtr)!=21)||(s2.equals(stackStartPtr,spr_StringScratch2fc)!=1)||(s2.equals(stackStartPtr,spr_StringScratch2fd)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch2fe;strcpy(spr_StringScratch2fe._array,"String unittest fail # 3");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch2fe).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch2ff;strcpy(spr_StringScratch2ff._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_64 s1(stackStartPtr,spr_StringScratch2ff);
      SPRStackArrayConcrete<char,3> spr_StringScratch300;strcpy(spr_StringScratch300._array,"b");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_64 s2(stackStartPtr,spr_StringScratch300);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,13> spr_StringScratch301;strcpy(spr_StringScratch301._array,"abbbbbbbbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch302;strcpy(spr_StringScratch302._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=11)||(s1.equals(stackStartPtr,spr_StringScratch301)!=1)||(s1.equals(stackStartPtr,spr_StringScratch302)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch303;strcpy(spr_StringScratch303._array,"String unittest fail # 4");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch303).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch304;strcpy(spr_StringScratch304._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_64 s1(stackStartPtr,spr_StringScratch304);
      SPRStackArrayConcrete<char,4> spr_StringScratch305;strcpy(spr_StringScratch305._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_64 s2(stackStartPtr,spr_StringScratch305);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch306;strcpy(spr_StringScratch306._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch307;strcpy(spr_StringScratch307._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch306)!=1)||(s1.equals(stackStartPtr,spr_StringScratch307)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch308;strcpy(spr_StringScratch308._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch308).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch309;strcpy(spr_StringScratch309._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_64 s1(stackStartPtr,spr_StringScratch309);
      SPRStackArrayConcrete<char,4> spr_StringScratch30a;strcpy(spr_StringScratch30a._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_64 s2(stackStartPtr,spr_StringScratch30a);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch30b;strcpy(spr_StringScratch30b._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch30c;strcpy(spr_StringScratch30c._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch30b)!=1)||(s1.equals(stackStartPtr,spr_StringScratch30c)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch30d;strcpy(spr_StringScratch30d._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch30d).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratch30e;strcpy(spr_StringScratch30e._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_64 s1(stackStartPtr,spr_StringScratch30e);
      SPRStackArrayConcrete<char,4> spr_StringScratch30f;strcpy(spr_StringScratch30f._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_64 s2(stackStartPtr,spr_StringScratch30f);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,43> spr_StringScratch310;strcpy(spr_StringScratch310._array,"acccccccccccccccccccccccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch311;strcpy(spr_StringScratch311._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=41)||(s1.equals(stackStartPtr,spr_StringScratch310)!=1)||(s1.equals(stackStartPtr,spr_StringScratch311)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch312;strcpy(spr_StringScratch312._array,"String unittest fail # 7");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch312).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratch313;strcpy(spr_StringScratch313._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_64 s1(stackStartPtr,spr_StringScratch313);
      SPRStackArrayConcrete<char,23> spr_StringScratch314;strcpy(spr_StringScratch314._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_64 s2(stackStartPtr,spr_StringScratch314);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      int expLength;expLength=10*21+21;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch315;strcpy(spr_StringScratch315._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=expLength)||(s1.equals(stackStartPtr,spr_StringScratch315)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch316;strcpy(spr_StringScratch316._array,"String unittest fail # 8");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch316).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      String_16 ext;
      SPRStackArrayConcrete<char,14> spr_StringScratch317;strcpy(spr_StringScratch317._array,"/home/x.docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 filename(stackStartPtr,spr_StringScratch317);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'/',ext);
      SPRStackArrayConcrete<char,3> spr_StringScratch318;strcpy(spr_StringScratch318._array,"$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch318).sa(stackStartPtr,ext).pr(stackStartPtr);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,3> spr_StringScratch319;strcpy(spr_StringScratch319._array,"$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch319).sa(stackStartPtr,ext).pr(stackStartPtr);
      SPRStackArrayConcrete<char,15> spr_StringScratch31a;strcpy(spr_StringScratch31a._array,"/tmp/abc.html");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.assign(stackStartPtr,spr_StringScratch31a);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,3> spr_StringScratch31b;strcpy(spr_StringScratch31b._array,"$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch31b).sa(stackStartPtr,ext).pr(stackStartPtr);
      
   }
   
   
} //End Of Method

int Hash_String_64::hash(char* stackStartPtr,String_64& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return str.getHashCode(stackStartPtr);
   
   
} //End Of Method

int Compare_String_64::compare(char* stackStartPtr,String_64& s1,String_64& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(s1.equals(stackStartPtr,s2)==1){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void Assigner_String_64::assign(char* stackStartPtr,String_64& s1,String_64& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.append(stackStartPtr,s2);
   
   
} //End Of Method

String_128::String_128(char* stackStartPtr,SPRStackArray<char>& init){
   char SPR_stack_dummy_var;
   _length=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,init);
   
   
} //End Of Method

String_128::String_128(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _length=0;
   SPRStackArrayConcrete<char,2> spr_StringScratch31c;strcpy(spr_StringScratch31c._array,"");
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,spr_StringScratch31c);
   
   
} //End Of Method

int String_128::capacity(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
      return _extendedBuf._theObject->_sz;
      
   }
   return _preAllocBuf._sz;
   
   
} //End Of Method

void String_128::ersetzen(char* stackStartPtr,String_128& alt,String_128& neu,String_128& ergebnis){
   char SPR_stack_dummy_var;
   int stelle;stelle=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int ende;ende=this->length(stackStartPtr)-alt.length(stackStartPtr);
   while(stelle<ende){
      int j;j=0;
      int gleich;gleich=1;
      int stellePruef;stellePruef=stelle;
      {//begin of SPR for statement
      j=0;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      while(j<alt.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->getAt(stackStartPtr,stellePruef)!=alt.getAt(stackStartPtr,j)){
            gleich=0;
            
         }
         stellePruef++;
         j++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         
      
      }
      }//end of SPR for statement
      if(gleich==1){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ergebnis.append(stackStartPtr,neu);
         stelle=stellePruef;
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         ergebnis.append(stackStartPtr,this->getAt(stackStartPtr,stelle));
         stelle++;
         }
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(stelle<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      ergebnis.append(stackStartPtr,this->getAt(stackStartPtr,stelle));
      stelle++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   };
   
   
} //End Of Method

void String_128::getKey(char* stackStartPtr,SPRSmartPtr<String_128> key){
   char SPR_stack_dummy_var;
   key=this;
   
   
} //End Of Method

int String_128::compare(char* stackStartPtr,String_128& other){
   char SPR_stack_dummy_var;
   int equal;equal=1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->length(stackStartPtr)==other.length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int l;l=this->length(stackStartPtr);
      int i;
      {//begin of SPR for statement
      i=0;
      while((i<l)&&(equal==1)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
            equal=0;
            
         }
         i++;
         
      
      }
      }//end of SPR for statement
      
   }
   return equal;
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > buf){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch31d;spr_intScratch31d=i;chck_accs_p0(buf,spr_intScratch31d,799)
   while((i<buf._theObject->_sz)&&(buf._theObject->_array[spr_intScratch31d]!='\0')){
      int j;j=0;
      SPRStackArrayConcrete<char,100> temp;
             int spr_intScratch31f;spr_intScratch31f=i;chck_accs_p0(buf,spr_intScratch31f,801)
      while((j<99)&&(i<buf._theObject->_sz)&&(buf._theObject->_array[spr_intScratch31f]!='\0')){
                int spr_intScratch321;spr_intScratch321=j;chck_accs0(temp,spr_intScratch321,803)
                int spr_intScratch323;spr_intScratch323=i;chck_accs_p0(buf,spr_intScratch323,805)
         temp._array[spr_intScratch321]=buf._theObject->_array[spr_intScratch323];
         j=j+1;
         i=i+1;
         spr_intScratch31f=i;chck_accs_p0(buf,spr_intScratch31f,801)
         
      };
             int spr_intScratch325;spr_intScratch325=j;chck_accs0(temp,spr_intScratch325,807)
      temp._array[spr_intScratch325]='\0';
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,temp);
      spr_intScratch31d=i;chck_accs_p0(buf,spr_intScratch31d,799)
      
   };
   
   
} //End Of Method

double String_128::asDouble(char* stackStartPtr){
   char SPR_stack_dummy_var;
   double ret;
   if(_extendedBuf!=0U){
      
                       ret=atof(_extendedBuf._theObject->_array);
                     
      
   }
   else
   {
   
                       ret=atof(_preAllocBuf._array);
                     
      }
   return ret;
   
   
} //End Of Method

void String_128::assign(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,str);
   
   
} //End Of Method

void String_128::assign(char* stackStartPtr,String_128& anderer){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,anderer);
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int i;i=0;
          int spr_intScratch327;spr_intScratch327=i;chck_accs0(str,spr_intScratch327,809)
   while(str._array[spr_intScratch327]!='\0'){
      i=i+1;
      spr_intScratch327=i;chck_accs0(str,spr_intScratch327,809)
      
   };
   if(_extendedBuf!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int l;l=this->length(stackStartPtr);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      int cap;cap=this->capacity(stackStartPtr)-1;
      int diff;diff=cap-l;
      if(diff<i){
         int spr_intScratch329;
         spr_intScratch329=(l+i)*2;
         if(spr_intScratch329<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<char> > newBuf;newBuf=new(spr_intScratch329) SPRArray<char>(spr_intScratch329)
         ;
         int j;j=0;
         while(j<l){
                   int spr_intScratch32a;spr_intScratch32a=j;chck_accs_p0(newBuf,spr_intScratch32a,812)
                   int spr_intScratch32c;spr_intScratch32c=j;chck_accs_p0(_extendedBuf,spr_intScratch32c,814)
            newBuf._theObject->_array[spr_intScratch32a]=_extendedBuf._theObject->_array[spr_intScratch32c];
            j=j+1;
            
         };
         int newLength;newLength=l+i;
         while(j<newLength){
                   int spr_intScratch32e;spr_intScratch32e=j;chck_accs_p0(newBuf,spr_intScratch32e,816)
                   int spr_intScratch330;spr_intScratch330=j-l;chck_accs0(str,spr_intScratch330,818)
            newBuf._theObject->_array[spr_intScratch32e]=str._array[spr_intScratch330];
            j=j+1;
            
         };
                int spr_intScratch332;spr_intScratch332=j;chck_accs_p0(newBuf,spr_intScratch332,820)
         newBuf._theObject->_array[spr_intScratch332]='\0';
         _extendedBuf=newBuf;
         _length=newLength;
         
      }
      int diff2;diff2=diff+1;
      if(diff2>i){
         int j;
         int newLength;newLength=l+i;
         j=l;
         while(j<newLength){
                   int spr_intScratch334;spr_intScratch334=j;chck_accs_p0(_extendedBuf,spr_intScratch334,822)
                   int spr_intScratch336;spr_intScratch336=j-l;chck_accs0(str,spr_intScratch336,824)
            _extendedBuf._theObject->_array[spr_intScratch334]=str._array[spr_intScratch336];
            j=j+1;
            
         };
                int spr_intScratch338;spr_intScratch338=j;chck_accs_p0(_extendedBuf,spr_intScratch338,826)
         _extendedBuf._theObject->_array[spr_intScratch338]='\0';
         _length=newLength;
         
      }
      
   }
   if(_extendedBuf==0U){
      int freeSpace;freeSpace=_preAllocBuf._sz-_length-1;
      int useExt;useExt=0;
      if(i>freeSpace){
         int spr_intScratch33a;
         spr_intScratch33a=(_length+i)*2;
         if(spr_intScratch33a<0)throw "invalid size requested for heap allocation";
         _extendedBuf=new(spr_intScratch33a) SPRArray<char>(spr_intScratch33a)
         ;
         int ii;ii=0;
         while(ii<_length){
                   int spr_intScratch33b;spr_intScratch33b=ii;chck_accs_p0(_extendedBuf,spr_intScratch33b,829)
                   int spr_intScratch33d;spr_intScratch33d=ii;chck_accs0(_preAllocBuf,spr_intScratch33d,831)
            _extendedBuf._theObject->_array[spr_intScratch33b]=_preAllocBuf._array[spr_intScratch33d];
            ii=ii+1;
            
         };
         int newLength;newLength=_length+i;
         while(ii<newLength){
                   int spr_intScratch33f;spr_intScratch33f=ii;chck_accs_p0(_extendedBuf,spr_intScratch33f,833)
                   int spr_intScratch341;spr_intScratch341=ii-_length;chck_accs0(str,spr_intScratch341,835)
            _extendedBuf._theObject->_array[spr_intScratch33f]=str._array[spr_intScratch341];
            ii=ii+1;
            
         };
                int spr_intScratch343;spr_intScratch343=ii;chck_accs_p0(_extendedBuf,spr_intScratch343,837)
         _extendedBuf._theObject->_array[spr_intScratch343]='\0';
                int spr_intScratch345;spr_intScratch345=0;chck_accs0(_preAllocBuf,spr_intScratch345,839)
         _preAllocBuf._array[spr_intScratch345]='\0';
         _length=newLength;
         useExt=1;
         
      }
      if(useExt==0){
         int k;k=0;
                int spr_intScratch347;spr_intScratch347=k;chck_accs0(str,spr_intScratch347,841)
         while(str._array[spr_intScratch347]!='\0'){
                   int spr_intScratch349;spr_intScratch349=_length;chck_accs0(_preAllocBuf,spr_intScratch349,843)
                   int spr_intScratch34b;spr_intScratch34b=k;chck_accs0(str,spr_intScratch34b,845)
            _preAllocBuf._array[spr_intScratch349]=str._array[spr_intScratch34b];
            _length=_length+1;
            k=k+1;
            spr_intScratch347=k;chck_accs0(str,spr_intScratch347,841)
            
         };
                int spr_intScratch34d;spr_intScratch34d=_length;chck_accs0(_preAllocBuf,spr_intScratch34d,847)
         _preAllocBuf._array[spr_intScratch34d]='\0';
         
      }
      
   }
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,SPRStackArray<char>& str,int pos,int anzahl){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,2> buf;
          int spr_intScratch34f;spr_intScratch34f=1;chck_accs0(buf,spr_intScratch34f,849)
   buf._array[spr_intScratch34f]='\0';
   {//begin of SPR for statement
   int i;i=0;
   while(i<anzahl){
             int spr_intScratch351;spr_intScratch351=0;chck_accs0(buf,spr_intScratch351,851)
             int spr_intScratch353;spr_intScratch353=i+pos;chck_accs0(str,spr_intScratch353,853)
      buf._array[spr_intScratch351]=str._array[spr_intScratch353];
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,buf);
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_128::length(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;i=0;
   return _length;
   
   
} //End Of Method

void String_128::print(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf==0U){
             int spr_intScratch355;spr_intScratch355=_preAllocBuf._sz-1;chck_accs0(_preAllocBuf,spr_intScratch355,855)
      _preAllocBuf._array[spr_intScratch355]='\0';
      printf("%s\n",_preAllocBuf._array);
      
   }
   if(_extendedBuf!=0U){
             int spr_intScratch357;spr_intScratch357=_extendedBuf._theObject->_sz-1;chck_accs_p0(_extendedBuf,spr_intScratch357,857)
      _extendedBuf._theObject->_array[spr_intScratch357]='\0';
      printf("%s\n",_extendedBuf._theObject->_array);
      
   }
   
   
} //End Of Method

void String_128::printNoLF(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if(_extendedBuf==0U){
             int spr_intScratch359;spr_intScratch359=_preAllocBuf._sz-1;chck_accs0(_preAllocBuf,spr_intScratch359,859)
      _preAllocBuf._array[spr_intScratch359]='\0';
      printf("%s",_preAllocBuf._array);
      
   }
   if(_extendedBuf!=0U){
             int spr_intScratch35b;spr_intScratch35b=_extendedBuf._theObject->_sz-1;chck_accs_p0(_extendedBuf,spr_intScratch35b,861)
      _extendedBuf._theObject->_array[spr_intScratch35b]='\0';
      printf("%s",_extendedBuf._theObject->_array);
      
   }
   
   
} //End Of Method

int String_128::lengthOf(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int l;l=0;
          int spr_intScratch35d;spr_intScratch35d=l;chck_accs0(str,spr_intScratch35d,863)
   while(str._array[spr_intScratch35d]!='\0'){
      l=l+1;
      spr_intScratch35d=l;chck_accs0(str,spr_intScratch35d,863)
      
   };
   return l;
   
   
} //End Of Method

void String_128::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
             int spr_intScratch35f;spr_intScratch35f=0;chck_accs_p0(_extendedBuf,spr_intScratch35f,865)
      _extendedBuf._theObject->_array[spr_intScratch35f]='\0';
      
   }
          int spr_intScratch361;spr_intScratch361=0;chck_accs0(_preAllocBuf,spr_intScratch361,867)
   _preAllocBuf._array[spr_intScratch361]='\0';
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,String_128& other){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int newLength;newLength=_length+other.length(stackStartPtr);
   if(_extendedBuf!=0U){
      int freeCap;freeCap=_extendedBuf._theObject->_sz-1-_length;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(freeCap<other.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         int newCap;newCap=2*(_length+other.length(stackStartPtr));
         int spr_intScratch363;
         spr_intScratch363=newCap;
         if(spr_intScratch363<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<char> > targetBuf;targetBuf=new(spr_intScratch363) SPRArray<char>(spr_intScratch363)
         ;
         {//begin of SPR for statement
         int i;i=0;
         while(i<_length){
                   int spr_intScratch364;spr_intScratch364=i;chck_accs_p0(targetBuf,spr_intScratch364,870)
                   int spr_intScratch366;spr_intScratch366=i;chck_accs_p0(_extendedBuf,spr_intScratch366,872)
            targetBuf._theObject->_array[spr_intScratch364]=_extendedBuf._theObject->_array[spr_intScratch366];
            i++;
            
         
         }
         }//end of SPR for statement
         _extendedBuf=targetBuf;
         
      }
      if(other._extendedBuf!=0U){
         {//begin of SPR for statement
         int i;i=_length;
         while(i<newLength){
                   int spr_intScratch368;spr_intScratch368=i;chck_accs_p0(_extendedBuf,spr_intScratch368,874)
                   int spr_intScratch36a;spr_intScratch36a=i-_length;chck_accs_p0(other._extendedBuf,spr_intScratch36a,876)
            _extendedBuf._theObject->_array[spr_intScratch368]=other._extendedBuf._theObject->_array[spr_intScratch36a];
            i++;
            
         
         }
         }//end of SPR for statement
         
      }
      else
      {
      {//begin of SPR for statement
         int i;i=_length;
         while(i<newLength){
                   int spr_intScratch36c;spr_intScratch36c=i;chck_accs_p0(_extendedBuf,spr_intScratch36c,878)
                   int spr_intScratch36e;spr_intScratch36e=i-_length;chck_accs0(other._preAllocBuf,spr_intScratch36e,880)
            _extendedBuf._theObject->_array[spr_intScratch36c]=other._preAllocBuf._array[spr_intScratch36e];
            i++;
            
         
         }
         }//end of SPR for statement
         }
             int spr_intScratch370;spr_intScratch370=newLength;chck_accs_p0(_extendedBuf,spr_intScratch370,882)
      _extendedBuf._theObject->_array[spr_intScratch370]='\0';
      
   }
   else
   {
   int freeCap;freeCap=_preAllocBuf._sz-1-_length;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(freeCap<other.length(stackStartPtr)){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         int newCap;newCap=2*(_length+other.length(stackStartPtr));
         int spr_intScratch372;
         spr_intScratch372=newCap;
         if(spr_intScratch372<0)throw "invalid size requested for heap allocation";
         SPRSmartPtr<SPRArray<char> > targetBuf;targetBuf=new(spr_intScratch372) SPRArray<char>(spr_intScratch372)
         ;
         {//begin of SPR for statement
         int i;i=0;
         while(i<_length){
                   int spr_intScratch373;spr_intScratch373=i;chck_accs_p0(targetBuf,spr_intScratch373,885)
                   int spr_intScratch375;spr_intScratch375=i;chck_accs0(_preAllocBuf,spr_intScratch375,887)
            targetBuf._theObject->_array[spr_intScratch373]=_preAllocBuf._array[spr_intScratch375];
            i++;
            
         
         }
         }//end of SPR for statement
         _extendedBuf=targetBuf;
         if(other._extendedBuf!=0U){
            {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch377;spr_intScratch377=i;chck_accs_p0(_extendedBuf,spr_intScratch377,889)
                      int spr_intScratch379;spr_intScratch379=i-_length;chck_accs_p0(other._extendedBuf,spr_intScratch379,891)
               _extendedBuf._theObject->_array[spr_intScratch377]=other._extendedBuf._theObject->_array[spr_intScratch379];
               i++;
               
            
            }
            }//end of SPR for statement
            
         }
         else
         {
         {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch37b;spr_intScratch37b=i;chck_accs_p0(_extendedBuf,spr_intScratch37b,893)
                      int spr_intScratch37d;spr_intScratch37d=i-_length;chck_accs0(other._preAllocBuf,spr_intScratch37d,895)
               _extendedBuf._theObject->_array[spr_intScratch37b]=other._preAllocBuf._array[spr_intScratch37d];
               i++;
               
            
            }
            }//end of SPR for statement
            }
         
      }
      else
      {
      if(other._extendedBuf!=0U){
            {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch37f;spr_intScratch37f=i;chck_accs0(_preAllocBuf,spr_intScratch37f,897)
                      int spr_intScratch381;spr_intScratch381=i-_length;chck_accs_p0(other._extendedBuf,spr_intScratch381,899)
               _preAllocBuf._array[spr_intScratch37f]=other._extendedBuf._theObject->_array[spr_intScratch381];
               i++;
               
            
            }
            }//end of SPR for statement
            
         }
         else
         {
         {//begin of SPR for statement
            int i;i=_length;
            while(i<newLength){
                      int spr_intScratch383;spr_intScratch383=i;chck_accs0(_preAllocBuf,spr_intScratch383,901)
                      int spr_intScratch385;spr_intScratch385=i-_length;chck_accs0(other._preAllocBuf,spr_intScratch385,903)
               _preAllocBuf._array[spr_intScratch383]=other._preAllocBuf._array[spr_intScratch385];
               i++;
               
            
            }
            }//end of SPR for statement
            }
                int spr_intScratch387;spr_intScratch387=newLength;chck_accs0(_preAllocBuf,spr_intScratch387,905)
         _preAllocBuf._array[spr_intScratch387]='\0';
         }
      }
   _length=newLength;
   
   
} //End Of Method

void String_128::clearAndReclaimMemory(char* stackStartPtr){
   char SPR_stack_dummy_var;
   _length=0;
   if(_extendedBuf!=0U){
      _extendedBuf=0U;
      
   }
   if(_extendedBuf==0U){
             int spr_intScratch389;spr_intScratch389=0;chck_accs0(_preAllocBuf,spr_intScratch389,907)
      _preAllocBuf._array[spr_intScratch389]='\0';
      
   }
   
   
} //End Of Method

int String_128::compare(char* stackStartPtr,SPRStackArray<char>& str){
   char SPR_stack_dummy_var;
   int ls;ls=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   ls=this->lengthOf(stackStartPtr,str);
   int lsp1;lsp1=ls+1;
   if(_extendedBuf!=0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ls!=this->length(stackStartPtr)){
         return 1;
         
      }
      int i;i=0;
      while(i<lsp1){
                int spr_intScratch38b;spr_intScratch38b=i;chck_accs0(str,spr_intScratch38b,909)
                int spr_intScratch38d;spr_intScratch38d=i;chck_accs_p0(_extendedBuf,spr_intScratch38d,911)
         if(str._array[spr_intScratch38b]!=_extendedBuf._theObject->_array[spr_intScratch38d]){
            return 1;
            
         }
         i=i+1;
         
      };
      
   }
   if(_extendedBuf==0U){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(ls!=this->length(stackStartPtr)){
         return 1;
         
      }
      int i;i=0;
      while(i<lsp1){
                int spr_intScratch38f;spr_intScratch38f=i;chck_accs0(str,spr_intScratch38f,913)
                int spr_intScratch391;spr_intScratch391=i;chck_accs0(_preAllocBuf,spr_intScratch391,915)
         if(str._array[spr_intScratch38f]!=_preAllocBuf._array[spr_intScratch391]){
            return 1;
            
         }
         i=i+1;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,2> buf;
          int spr_intScratch393;spr_intScratch393=0;chck_accs0(buf,spr_intScratch393,917)
   buf._array[spr_intScratch393]=c;
          int spr_intScratch395;spr_intScratch395=1;chck_accs0(buf,spr_intScratch395,919)
   buf._array[spr_intScratch395]='\0';
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,buf);
   
   
} //End Of Method

char String_128::getAt(char* stackStartPtr,int i){
   char SPR_stack_dummy_var;
   if(_extendedBuf!=0U){
             int spr_intScratch397;spr_intScratch397=i;chck_accs_p0(_extendedBuf,spr_intScratch397,921)
      return _extendedBuf._theObject->_array[spr_intScratch397];
      
   }
   else
   {
          int spr_intScratch399;spr_intScratch399=i;chck_accs0(_preAllocBuf,spr_intScratch399,923)
      return _preAllocBuf._array[spr_intScratch399];
      }
   return '0';
   
   
} //End Of Method

void String_128::getExtendedBuf(char* stackStartPtr,SPRSmartPtr<SPRArray<char> > extendedBufRet){
   char SPR_stack_dummy_var;
   extendedBufRet=_extendedBuf;
   
   
} //End Of Method

String_128::~String_128(){
   ThreadLocalStorageList* list=NULL;
   #ifdef WIN32_X86
   list=(ThreadLocalStorageList*)TlsGetValue(__spr_tls);
   #endif
   #ifdef SPR_PTHREAD
   list=(ThreadLocalStorageList*)pthread_getspecific(__spr_tls);
   #endif
   char* stackStartPtr=list->_stackStartPtr;
   char SPR_stack_dummy_var;
   _extendedBuf=0U;
   _length=-13;
   
   
} //End Of Method

void String_128::rightOf(char* stackStartPtr,char divider,String_128& oStr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int zeiger;zeiger=this->length(stackStartPtr)-1;
   int fertig;fertig=0;
   while((zeiger>=0)&&(fertig==0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char zeichen;zeichen=this->getAt(stackStartPtr,zeiger);
      if(zeichen==divider){
         fertig=1;
         
      }
      else
      {
      zeiger=zeiger-1;
         }
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   oStr.clear(stackStartPtr);
   {//begin of SPR for statement
   int i;i=zeiger+1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_128::equals(char* stackStartPtr,String_128& other){
   char SPR_stack_dummy_var;
   int equal;equal=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->length(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l!=other.length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(this->getAt(stackStartPtr,i)!=other.getAt(stackStartPtr,i)){
         return 0;
         
      }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_128::equals(char* stackStartPtr,SPRStackArray<char>& other){
   char SPR_stack_dummy_var;
   int lother;lother=0;
          int spr_intScratch39b;spr_intScratch39b=lother;chck_accs0(other,spr_intScratch39b,925)
   while((lother<other._sz)&&(other._array[spr_intScratch39b]!='\0')){
      lother++;
      spr_intScratch39b=lother;chck_accs0(other,spr_intScratch39b,925)
      
   };
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(lother!=this->length(stackStartPtr)){
      return 0;
      
   }
   {//begin of SPR for statement
   int i;i=0;
   while(i<lother){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch39d;spr_intScratch39d=i;chck_accs0(other,spr_intScratch39d,927)
      if(this->getAt(stackStartPtr,i)!=other._array[spr_intScratch39d]){
         return 0;
         
      }
      i++;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,SPRSmartPtr<String_128> other){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<other._theObject->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      this->append(stackStartPtr,other._theObject->getAt(stackStartPtr,i));
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_128::append(char* stackStartPtr,int x){
   char SPR_stack_dummy_var;
   SPRStackArrayConcrete<char,16> buf;
          int spr_intScratch39f;spr_intScratch39f=0;chck_accs0(buf,spr_intScratch39f,929)
   buf._array[spr_intScratch39f]='\0';
    sprintf(buf._array,"%i",x); 
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->append(stackStartPtr,buf);
   
   
} //End Of Method

void String_128::toCharArray(char* stackStartPtr,SPRStackArray<char>& feld){
   char SPR_stack_dummy_var;
   int szm1;szm1=feld._sz-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(szm1<this->length(stackStartPtr)){
             int spr_intScratch3a1;spr_intScratch3a1=0;chck_accs0(feld,spr_intScratch3a1,931)
      feld._array[spr_intScratch3a1]='\0';
      return ;
      
   }
   int i;i=0;
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
             int spr_intScratch3a3;spr_intScratch3a3=i;chck_accs0(feld,spr_intScratch3a3,933)
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      feld._array[spr_intScratch3a3]=this->getAt(stackStartPtr,i);
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
          int spr_intScratch3a5;spr_intScratch3a5=i;chck_accs0(feld,spr_intScratch3a5,935)
   feld._array[spr_intScratch3a5]='\0';
   
   
} //End Of Method

int String_128::asNumber(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->asNumber(stackStartPtr,10);
   
   
} //End Of Method

int String_128::asNumber(char* stackStartPtr,int radix){
   char SPR_stack_dummy_var;
   int ret;ret=0;
   int isNegative;isNegative=0;
   int idx;idx=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(this->getAt(stackStartPtr,0)=='-'){
      isNegative=1;
      idx=1;
      
   }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(idx<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,idx);
      switch(c){
         case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'0');
            
         };break;
         
         case 'a':case 'b':case 'c':case 'd':case 'e':case 'f':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'a')+10;
            
         };break;
         
         case 'A':case 'B':case 'C':case 'D':case 'E':case 'F':{
            ret=ret*radix;
            ret=ret+((int)c)-((int)'A')+10;
            
         };break;
         
         default:{
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            idx=this->length(stackStartPtr);
            
         };
         
      }
      idx++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   if(isNegative==1){
      ret=-1*ret;
      
   }
   return ret;
   
   
} //End Of Method

void String_128::escape(char* stackStartPtr,String_128& escaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,escape);
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         escaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

void String_128::deEscape(char* stackStartPtr,String_128& deescaped,char escape){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   while(i<this->length(stackStartPtr)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
      if(c==escape){
         i++;
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,this->getAt(stackStartPtr,i));
         
      }
      else
      {
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         deescaped.append(stackStartPtr,c);
         }
      i++;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_128::endsWith(char* stackStartPtr,SPRStackArray<char>& end){
   char SPR_stack_dummy_var;
   int j;j=0;
          int spr_intScratch3a7;spr_intScratch3a7=j;chck_accs0(end,spr_intScratch3a7,937)
   while((end._array[spr_intScratch3a7]!='\0')&&(j<end._sz)){
      j++;
      spr_intScratch3a7=j;chck_accs0(end,spr_intScratch3a7,937)
      
   };
   if(j<=0){
      return -1;
      
   }
   else
   {
   j=j-1;
      }
   {//begin of SPR for statement
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int i;i=this->length(stackStartPtr)-1;
   while((i>=0)&&(j>=0)){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      char c;c=this->getAt(stackStartPtr,i);
             int spr_intScratch3a9;spr_intScratch3a9=j;chck_accs0(end,spr_intScratch3a9,939)
      if(c!=end._array[spr_intScratch3a9]){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_128::endsWith(char* stackStartPtr,String_16& str2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(str2.length(stackStartPtr)>this->length(stackStartPtr)){
      return 0;
      
   }
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p;p=str2.length(stackStartPtr)-1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int p2;p2=this->length(stackStartPtr)-1;
   {//begin of SPR for statement
   int i;i=p;
   int j;j=p2;
   while(i>0){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if(str2.getAt(stackStartPtr,i)!=this->getAt(stackStartPtr,j)){
         return 0;
         
      }
      i=i-1;
      ;
      j=j-1;
      
   
   }
   }//end of SPR for statement
   return 1;
   
   
} //End Of Method

int String_128::startsWith(char* stackStartPtr,SPRStackArray<char>& buf){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int l;l=this->lengthOf(stackStartPtr,buf);
   int i;i=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(l>this->length(stackStartPtr)){
      return 0;
      
   }
          int spr_intScratch3ab;spr_intScratch3ab=i;chck_accs0(buf,spr_intScratch3ab,941)
   while((i<l)&&(buf._array[spr_intScratch3ab]!='\0')){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
             int spr_intScratch3ad;spr_intScratch3ad=i;chck_accs0(buf,spr_intScratch3ad,943)
      if(this->getAt(stackStartPtr,i)!=buf._array[spr_intScratch3ad]){
         return 0;
         
      }
      i++;
      spr_intScratch3ab=i;chck_accs0(buf,spr_intScratch3ab,941)
      
   };
   return 1;
   
   
} //End Of Method

void String_128::subString(char* stackStartPtr,String_128& oStr,int start,int end){
   char SPR_stack_dummy_var;
   {//begin of SPR for statement
   int i;i=start;
   while(i<=end){
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      oStr.append(stackStartPtr,this->getAt(stackStartPtr,i));
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

int String_128::isNumberChar(char* stackStartPtr,char c){
   char SPR_stack_dummy_var;
   switch(c){
      case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':{
         return 1;
         
      };
      default:{
         return 0;
         
      };
      
   }
   return 0;
   
   
} //End Of Method

int String_128::hashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int hc;
   if(_extendedBuf==0U){
       
                       hc = suchoi(_preAllocBuf._array,_length);
                     
      
   }
   else
   {
    
                       hc = suchoi(_extendedBuf._theObject->_array,_length);
                     
      }
   return hc;
   
   
} //End Of Method

int String_128::getHashCode(char* stackStartPtr){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return this->hashCode(stackStartPtr);
   
   
} //End Of Method

void String_128::unitTest(char* stackStartPtr){
   char SPR_stack_dummy_var;
   PrintfClass pfc;
   if(1==1){
      SPRStackArrayConcrete<char,4> spr_StringScratch3af;strcpy(spr_StringScratch3af._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_128 s1(stackStartPtr,spr_StringScratch3af);
      SPRStackArrayConcrete<char,4> spr_StringScratch3b0;strcpy(spr_StringScratch3b0._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_128 s2(stackStartPtr,spr_StringScratch3b0);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,6> spr_StringScratch3b1;strcpy(spr_StringScratch3b1._array,"aaaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch3b2;strcpy(spr_StringScratch3b2._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=4)||(s1.equals(stackStartPtr,spr_StringScratch3b1)!=1)||(s1.equals(stackStartPtr,spr_StringScratch3b2)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch3b3;strcpy(spr_StringScratch3b3._array,"String unittest fail # 1");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch3b3).pr(stackStartPtr);
         
      }
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.clear(stackStartPtr);
      SPRStackArrayConcrete<char,21> spr_StringScratch3b4;strcpy(spr_StringScratch3b4._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,spr_StringScratch3b4);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s1.append(stackStartPtr,s2);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch3b5;strcpy(spr_StringScratch3b5._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch3b6;strcpy(spr_StringScratch3b6._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch3b5)!=1)||(s1.equals(stackStartPtr,spr_StringScratch3b6)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch3b7;strcpy(spr_StringScratch3b7._array,"String unittest fail # 2");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch3b7).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,4> spr_StringScratch3b8;strcpy(spr_StringScratch3b8._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_128 s1(stackStartPtr,spr_StringScratch3b8);
      String_128 s2;
      SPRStackArrayConcrete<char,21> spr_StringScratch3b9;strcpy(spr_StringScratch3b9._array,"hurzlipurzligiraffe");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,spr_StringScratch3b9);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      s2.append(stackStartPtr,s1);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch3ba;strcpy(spr_StringScratch3ba._array,"hurzlipurzligiraffeaa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,4> spr_StringScratch3bb;strcpy(spr_StringScratch3bb._array,"aa");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s2.length(stackStartPtr)!=21)||(s2.equals(stackStartPtr,spr_StringScratch3ba)!=1)||(s2.equals(stackStartPtr,spr_StringScratch3bb)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch3bc;strcpy(spr_StringScratch3bc._array,"String unittest fail # 3");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch3bc).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch3bd;strcpy(spr_StringScratch3bd._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_128 s1(stackStartPtr,spr_StringScratch3bd);
      SPRStackArrayConcrete<char,3> spr_StringScratch3be;strcpy(spr_StringScratch3be._array,"b");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_128 s2(stackStartPtr,spr_StringScratch3be);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,13> spr_StringScratch3bf;strcpy(spr_StringScratch3bf._array,"abbbbbbbbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch3c0;strcpy(spr_StringScratch3c0._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=11)||(s1.equals(stackStartPtr,spr_StringScratch3bf)!=1)||(s1.equals(stackStartPtr,spr_StringScratch3c0)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch3c1;strcpy(spr_StringScratch3c1._array,"String unittest fail # 4");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch3c1).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch3c2;strcpy(spr_StringScratch3c2._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_128 s1(stackStartPtr,spr_StringScratch3c2);
      SPRStackArrayConcrete<char,4> spr_StringScratch3c3;strcpy(spr_StringScratch3c3._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_128 s2(stackStartPtr,spr_StringScratch3c3);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch3c4;strcpy(spr_StringScratch3c4._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch3c5;strcpy(spr_StringScratch3c5._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch3c4)!=1)||(s1.equals(stackStartPtr,spr_StringScratch3c5)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch3c6;strcpy(spr_StringScratch3c6._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch3c6).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,3> spr_StringScratch3c7;strcpy(spr_StringScratch3c7._array,"a");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_128 s1(stackStartPtr,spr_StringScratch3c7);
      SPRStackArrayConcrete<char,4> spr_StringScratch3c8;strcpy(spr_StringScratch3c8._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_128 s2(stackStartPtr,spr_StringScratch3c8);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,23> spr_StringScratch3c9;strcpy(spr_StringScratch3c9._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch3ca;strcpy(spr_StringScratch3ca._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=21)||(s1.equals(stackStartPtr,spr_StringScratch3c9)!=1)||(s1.equals(stackStartPtr,spr_StringScratch3ca)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch3cb;strcpy(spr_StringScratch3cb._array,"String unittest fail # 5");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch3cb).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratch3cc;strcpy(spr_StringScratch3cc._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_128 s1(stackStartPtr,spr_StringScratch3cc);
      SPRStackArrayConcrete<char,4> spr_StringScratch3cd;strcpy(spr_StringScratch3cd._array,"cc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_128 s2(stackStartPtr,spr_StringScratch3cd);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,43> spr_StringScratch3ce;strcpy(spr_StringScratch3ce._array,"acccccccccccccccccccccccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch3cf;strcpy(spr_StringScratch3cf._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=41)||(s1.equals(stackStartPtr,spr_StringScratch3ce)!=1)||(s1.equals(stackStartPtr,spr_StringScratch3cf)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch3d0;strcpy(spr_StringScratch3d0._array,"String unittest fail # 7");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch3d0).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      SPRStackArrayConcrete<char,23> spr_StringScratch3d1;strcpy(spr_StringScratch3d1._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_128 s1(stackStartPtr,spr_StringScratch3d1);
      SPRStackArrayConcrete<char,23> spr_StringScratch3d2;strcpy(spr_StringScratch3d2._array,"acccccccccccccccccccc");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_128 s2(stackStartPtr,spr_StringScratch3d2);
      {//begin of SPR for statement
      int i;i=0;
      while(i<10){
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         s1.append(stackStartPtr,s2);
         i++;
         
      
      }
      }//end of SPR for statement
      int expLength;expLength=10*21+21;
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      SPRStackArrayConcrete<char,7> spr_StringScratch3d3;strcpy(spr_StringScratch3d3._array,"abbbb");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if((s1.length(stackStartPtr)!=expLength)||(s1.equals(stackStartPtr,spr_StringScratch3d3)==1)){
         SPRStackArrayConcrete<char,26> spr_StringScratch3d4;strcpy(spr_StringScratch3d4._array,"String unittest fail # 8");
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
         pfc.fstr(stackStartPtr,spr_StringScratch3d4).pr(stackStartPtr);
         
      }
      
   }
   if(1==1){
      String_16 ext;
      SPRStackArrayConcrete<char,14> spr_StringScratch3d5;strcpy(spr_StringScratch3d5._array,"/home/x.docx");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      String_16 filename(stackStartPtr,spr_StringScratch3d5);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'/',ext);
      SPRStackArrayConcrete<char,3> spr_StringScratch3d6;strcpy(spr_StringScratch3d6._array,"$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch3d6).sa(stackStartPtr,ext).pr(stackStartPtr);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,3> spr_StringScratch3d7;strcpy(spr_StringScratch3d7._array,"$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch3d7).sa(stackStartPtr,ext).pr(stackStartPtr);
      SPRStackArrayConcrete<char,15> spr_StringScratch3d8;strcpy(spr_StringScratch3d8._array,"/tmp/abc.html");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.assign(stackStartPtr,spr_StringScratch3d8);
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      filename.rightOf(stackStartPtr,'.',ext);
      SPRStackArrayConcrete<char,3> spr_StringScratch3d9;strcpy(spr_StringScratch3d9._array,"$");
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
      pfc.fstr(stackStartPtr,spr_StringScratch3d9).sa(stackStartPtr,ext).pr(stackStartPtr);
      
   }
   
   
} //End Of Method

int Hash_String_128::hash(char* stackStartPtr,String_128& str){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   return str.getHashCode(stackStartPtr);
   
   
} //End Of Method

int Compare_String_128::compare(char* stackStartPtr,String_128& s1,String_128& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if(s1.equals(stackStartPtr,s2)==1){
      return 1;
      
   }
   return 0;
   
   
} //End Of Method

void Assigner_String_128::assign(char* stackStartPtr,String_128& s1,String_128& s2){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.clear(stackStartPtr);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   s1.append(stackStartPtr,s2);
   
   
} //End Of Method

Hashtable4_Hashable4_KeyType4::Hashtable4_Hashable4_KeyType4(char* stackStartPtr,int initialCapacity){
   char SPR_stack_dummy_var;
   _numUsed=0;
   int spr_intScratch3da;
   spr_intScratch3da=initialCapacity;
   if(spr_intScratch3da<0)throw "invalid size requested for heap allocation";
   _elements=new(spr_intScratch3da) SPRArray<SPRSmartPtr<Hashable4> >(spr_intScratch3da)
   ;
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::insert(char* stackStartPtr,SPRSmartPtr<Hashable4> x){
   char SPR_stack_dummy_var;
   int minCap;minCap=((int)_numUsed*1.2f+2);
   if(_elements._theObject->_sz<=minCap){
      int newCap;newCap=_elements._theObject->_sz*2;
      SPRSmartPtr<SPRArray<SPRSmartPtr<Hashable4> > > oldArray;
      oldArray=_elements;
      int spr_intScratch3db;
      spr_intScratch3db=newCap;
      if(spr_intScratch3db<0)throw "invalid size requested for heap allocation";
      _elements=new(spr_intScratch3db) SPRArray<SPRSmartPtr<Hashable4> >(spr_intScratch3db)
      ;
      {//begin of SPR for statement
      int i;i=0;
      while(i<oldArray._theObject->_sz){
                int spr_intScratch3dc;spr_intScratch3dc=i;chck_accs_p0(oldArray,spr_intScratch3dc,990)
         if(oldArray._theObject->_array[spr_intScratch3dc]!=0U){
                   int spr_intScratch3de;spr_intScratch3de=i;chck_accs_p0(oldArray,spr_intScratch3de,992)
            if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
            this->insertInternally(stackStartPtr,oldArray._theObject->_array[spr_intScratch3de]);
            
         }
         i++;
         
      
      }
      }//end of SPR for statement
      
   }
   _numUsed++;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->insertInternally(stackStartPtr,x);
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::insertInternally(char* stackStartPtr,SPRSmartPtr<Hashable4> x){
   char SPR_stack_dummy_var;
   SPRSmartPtr<KeyType4> key;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   x._theObject->getKey(stackStartPtr,key);
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int code;code=key._theObject->getHashCode(stackStartPtr);
   code=code%_elements._theObject->_sz;
          int spr_intScratch3e0;spr_intScratch3e0=code;chck_accs_p0(_elements,spr_intScratch3e0,994)
   while(_elements._theObject->_array[spr_intScratch3e0]!=0U){
      code++;
      code=code%_elements._theObject->_sz;
      spr_intScratch3e0=code;chck_accs_p0(_elements,spr_intScratch3e0,994)
      
   };
          int spr_intScratch3e2;spr_intScratch3e2=code;chck_accs_p0(_elements,spr_intScratch3e2,996)
   _elements._theObject->_array[spr_intScratch3e2]=x;
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::get(char* stackStartPtr,KeyType4& key,SPRSmartPtr<Hashable4>& oValue){
   char SPR_stack_dummy_var;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   int code;code=key.getHashCode(stackStartPtr);
   code=code%_elements._theObject->_sz;
   int searching;searching=1;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
          int spr_intScratch3ea;do{
             int spr_intScratch3e4;spr_intScratch3e4=code;chck_accs_p0(_elements,spr_intScratch3e4,998)
      if(_elements._theObject->_array[spr_intScratch3e4]!=0U){
         SPRSmartPtr<KeyType4> key2;
                int spr_intScratch3e6;spr_intScratch3e6=code;chck_accs_p0(_elements,spr_intScratch3e6,1000)
         _elements._theObject->_array[spr_intScratch3e6]._theObject->getKey(stackStartPtr,key2);
         if(key2._theObject->compare(stackStartPtr,key)==1){
                   int spr_intScratch3e8;spr_intScratch3e8=code;chck_accs_p0(_elements,spr_intScratch3e8,1002)
            oValue=_elements._theObject->_array[spr_intScratch3e8];
            searching=0;
            
         }
         
      }
      code++;
      code=code%_elements._theObject->_sz;
      spr_intScratch3ea=code;chck_accs_p0(_elements,spr_intScratch3ea,1004)
      
   }
   while((_elements._theObject->_array[spr_intScratch3ea]!=0U)&&(searching==1));
   
   
} //End Of Method

int Hashtable4_Hashable4_KeyType4::numElements(char* stackStartPtr){
   char SPR_stack_dummy_var;
   return _numUsed;
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::getFirst(char* stackStartPtr,SPRSmartPtr<Hashable4>& oValue){
   char SPR_stack_dummy_var;
   _readPtr=0;
   if( MAX_STACK_SZ - (stackStartPtr-&SPR_stack_dummy_var) < __systemRuntime->_maxStackBytesNeededPerCall) overflowHandler();
   this->getNext(stackStartPtr,oValue);
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::getNext(char* stackStartPtr,SPRSmartPtr<Hashable4>& oValue){
   char SPR_stack_dummy_var;
   int stepping;stepping=1;
   while((_readPtr<_elements._theObject->_sz)&&(stepping==1)){
             int spr_intScratch3ec;spr_intScratch3ec=_readPtr;chck_accs_p0(_elements,spr_intScratch3ec,1006)
      if(_elements._theObject->_array[spr_intScratch3ec]==0U){
         _readPtr++;
         
      }
      else
      {
      stepping=0;
         }
      
   };
   if(_readPtr<_elements._theObject->_sz){
             int spr_intScratch3ee;spr_intScratch3ee=_readPtr;chck_accs_p0(_elements,spr_intScratch3ee,1008)
      oValue=_elements._theObject->_array[spr_intScratch3ee];
      _readPtr++;
      
   }
   else
   {
   oValue=0U;
      }
   
   
} //End Of Method

void Hashtable4_Hashable4_KeyType4::clear(char* stackStartPtr){
   char SPR_stack_dummy_var;
   int i;i=0;
   {//begin of SPR for statement
   i=0;
   while(i<_elements._theObject->_sz){
             int spr_intScratch3f0;spr_intScratch3f0=i;chck_accs_p0(_elements,spr_intScratch3f0,1010)
      _elements._theObject->_array[spr_intScratch3f0]=0U;
      i++;
      
   
   }
   }//end of SPR for statement
   
   
} //End Of Method

