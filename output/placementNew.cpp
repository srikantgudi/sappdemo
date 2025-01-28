#include "stdafx.h"
#include "header.h"
void* Compare_String_64::operator new(size_t objectSize,void* place){
   Compare_String_64* obj=(Compare_String_64*)place;
  return obj;
}
void Compare_String_64::destroy_sappeur_internal(){delete this;}
void* ThreadInfo::operator new(size_t objectSize,void* place){
   ThreadInfo* obj=(ThreadInfo*)place;
  return obj;
}
void ThreadInfo::destroy_sappeur_internal(){delete this;}
void* Hash_String_128::operator new(size_t objectSize,void* place){
   Hash_String_128* obj=(Hash_String_128*)place;
  return obj;
}
void Hash_String_128::destroy_sappeur_internal(){delete this;}
void* Assigner_String_64::operator new(size_t objectSize,void* place){
   Assigner_String_64* obj=(Assigner_String_64*)place;
  return obj;
}
void Assigner_String_64::destroy_sappeur_internal(){delete this;}
void* Hashtable4_Hashable4_KeyType4::operator new(size_t objectSize,void* place){
   Hashtable4_Hashable4_KeyType4* obj=(Hashtable4_Hashable4_KeyType4*)place;
   SPRSmartPtr<SPRArray<SPRSmartPtr<Hashable4> > >::operator new(sizeof(SPRSmartPtr<SPRArray<SPRSmartPtr<Hashable4> > >),(char*)&(obj->_elements));
  return obj;
}
void Hashtable4_Hashable4_KeyType4::destroy_sappeur_internal(){delete this;}
void* SystemTime::operator new(size_t objectSize,void* place){
   SystemTime* obj=(SystemTime*)place;
  return obj;
}
void SystemTime::destroy_sappeur_internal(){delete this;}
void* Hash_String_64::operator new(size_t objectSize,void* place){
   Hash_String_64* obj=(Hash_String_64*)place;
  return obj;
}
void Hash_String_64::destroy_sappeur_internal(){delete this;}
void* PrintfClass::operator new(size_t objectSize,void* place){
   PrintfClass* obj=(PrintfClass*)place;
   String_16::operator new(sizeof(String_16),(char*)&(obj->_fstr));
   String_128::operator new(sizeof(String_128),(char*)&(obj->_outBuf));
  return obj;
}
void PrintfClass::destroy_sappeur_internal(){delete this;}
void* Compare_String_128::operator new(size_t objectSize,void* place){
   Compare_String_128* obj=(Compare_String_128*)place;
  return obj;
}
void Compare_String_128::destroy_sappeur_internal(){delete this;}
void* Assigner_String_16::operator new(size_t objectSize,void* place){
   Assigner_String_16* obj=(Assigner_String_16*)place;
  return obj;
}
void Assigner_String_16::destroy_sappeur_internal(){delete this;}
void* SystemConstants::operator new(size_t objectSize,void* place){
   SystemConstants* obj=(SystemConstants*)place;
  return obj;
}
void SystemConstants::destroy_sappeur_internal(){delete this;}
void* Input::operator new(size_t objectSize,void* place){
   Input* obj=(Input*)place;
  return obj;
}
void Input::destroy_sappeur_internal(){delete this;}
void* String_128::operator new(size_t objectSize,void* place){
   String_128* obj=(String_128*)place;
  return obj;
}
void String_128::destroy_sappeur_internal(){delete this;}
void* SemaphoreInfo::operator new(size_t objectSize,void* place){
   SemaphoreInfo* obj=(SemaphoreInfo*)place;
  return obj;
}
void SemaphoreInfo::destroy_sappeur_internal(){delete this;}
void* Hash_String_16::operator new(size_t objectSize,void* place){
   Hash_String_16* obj=(Hash_String_16*)place;
  return obj;
}
void Hash_String_16::destroy_sappeur_internal(){delete this;}
void* NullPtrClassSappeurInternal::operator new(size_t objectSize,void* place){
   NullPtrClassSappeurInternal* obj=(NullPtrClassSappeurInternal*)place;
  return obj;
}
void NullPtrClassSappeurInternal::destroy_sappeur_internal(){delete this;}
void* Assigner_String_32::operator new(size_t objectSize,void* place){
   Assigner_String_32* obj=(Assigner_String_32*)place;
  return obj;
}
void Assigner_String_32::destroy_sappeur_internal(){delete this;}
void* SPRFile::operator new(size_t objectSize,void* place){
   SPRFile* obj=(SPRFile*)place;
  return obj;
}
void SPRFile::destroy_sappeur_internal(){delete this;}
void* CommandlineArgs::operator new(size_t objectSize,void* place){
   CommandlineArgs* obj=(CommandlineArgs*)place;
  return obj;
}
void CommandlineArgs::destroy_sappeur_internal(){delete this;}
void* ThreadLocalStorage::operator new(size_t objectSize,void* place){
   ThreadLocalStorage* obj=(ThreadLocalStorage*)place;
   SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 >::operator new(sizeof(SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 >),(char*)&(obj->_entries),1000);
  return obj;
}
void ThreadLocalStorage::destroy_sappeur_internal(){delete this;}
void* String_32::operator new(size_t objectSize,void* place){
   String_32* obj=(String_32*)place;
  return obj;
}
void String_32::destroy_sappeur_internal(){delete this;}
void* Hash_String_32::operator new(size_t objectSize,void* place){
   Hash_String_32* obj=(Hash_String_32*)place;
  return obj;
}
void Hash_String_32::destroy_sappeur_internal(){delete this;}
void* HexPrinter::operator new(size_t objectSize,void* place){
   HexPrinter* obj=(HexPrinter*)place;
  return obj;
}
void HexPrinter::destroy_sappeur_internal(){delete this;}
void* AlphaEntry::operator new(size_t objectSize,void* place){
   AlphaEntry* obj=(AlphaEntry*)place;
  return obj;
}
void AlphaEntry::destroy_sappeur_internal(){delete this;}
void* ThreadLocalStorageEntry::operator new(size_t objectSize,void* place){
   ThreadLocalStorageEntry* obj=(ThreadLocalStorageEntry*)place;
  return obj;
}
void ThreadLocalStorageEntry::destroy_sappeur_internal(){delete this;}
void* String_16::operator new(size_t objectSize,void* place){
   String_16* obj=(String_16*)place;
  return obj;
}
void String_16::destroy_sappeur_internal(){delete this;}
void* MTSuperClass::operator new(size_t objectSize,void* place){
   MTSuperClass* obj=(MTSuperClass*)place;
  return obj;
}
void MTSuperClass::destroy_sappeur_internal(){delete this;}
void* QM::operator new(size_t objectSize,void* place){
   QM* obj=(QM*)place;
  return obj;
}
void QM::destroy_sappeur_internal(){delete this;}
void* KeyType4::operator new(size_t objectSize,void* place){
   KeyType4* obj=(KeyType4*)place;
   String_16::operator new(sizeof(String_16),(char*)&(obj->_vornameNamename));
  return obj;
}
void KeyType4::destroy_sappeur_internal(){delete this;}
void* Main::operator new(size_t objectSize,void* place){
   Main* obj=(Main*)place;
  return obj;
}
void Main::destroy_sappeur_internal(){delete this;}
void* Compare_String_32::operator new(size_t objectSize,void* place){
   Compare_String_32* obj=(Compare_String_32*)place;
  return obj;
}
void Compare_String_32::destroy_sappeur_internal(){delete this;}
void* String_64::operator new(size_t objectSize,void* place){
   String_64* obj=(String_64*)place;
  return obj;
}
void String_64::destroy_sappeur_internal(){delete this;}
void* Assigner_String_128::operator new(size_t objectSize,void* place){
   Assigner_String_128* obj=(Assigner_String_128*)place;
  return obj;
}
void Assigner_String_128::destroy_sappeur_internal(){delete this;}
void* test556661::operator new(size_t objectSize,void* place){
   test556661* obj=(test556661*)place;
  return obj;
}
void test556661::destroy_sappeur_internal(){delete this;}
void* Benutzer_Umschalter::operator new(size_t objectSize,void* place){
   Benutzer_Umschalter* obj=(Benutzer_Umschalter*)place;
  return obj;
}
void Benutzer_Umschalter::destroy_sappeur_internal(){delete this;}
void* FGString::operator new(size_t objectSize,void* place){
   FGString* obj=(FGString*)place;
   String_16::operator new(sizeof(String_16),(char*)&(obj->_content));
  return obj;
}
void FGString::destroy_sappeur_internal(){delete this;}
void* MutexInfo::operator new(size_t objectSize,void* place){
   MutexInfo* obj=(MutexInfo*)place;
  return obj;
}
void MutexInfo::destroy_sappeur_internal(){delete this;}
void* Compare_String_16::operator new(size_t objectSize,void* place){
   Compare_String_16* obj=(Compare_String_16*)place;
  return obj;
}
void Compare_String_16::destroy_sappeur_internal(){delete this;}
void* Mutex::operator new(size_t objectSize,void* place){
   Mutex* obj=(Mutex*)place;
   SPRSmartPtr<MutexInfo>::operator new(sizeof(SPRSmartPtr<MutexInfo>),(char*)&(obj->_mi));
  return obj;
}
void Mutex::destroy_sappeur_internal(){delete this;}
void* MultiThreadAdmin::operator new(size_t objectSize,void* place){
   MultiThreadAdmin* obj=(MultiThreadAdmin*)place;
  return obj;
}
void MultiThreadAdmin::destroy_sappeur_internal(){delete this;}
void* SystemControl::operator new(size_t objectSize,void* place){
   SystemControl* obj=(SystemControl*)place;
  return obj;
}
void SystemControl::destroy_sappeur_internal(){delete this;}
void* Semaphore::operator new(size_t objectSize,void* place){
   Semaphore* obj=(Semaphore*)place;
   SPRSmartPtr<SemaphoreInfo>::operator new(sizeof(SPRSmartPtr<SemaphoreInfo>),(char*)&(obj->_si));
  return obj;
}
void Semaphore::destroy_sappeur_internal(){delete this;}
void* ThreadLocalStorageList::operator new(size_t objectSize,void* place){
   ThreadLocalStorageList* obj=(ThreadLocalStorageList*)place;
   SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 >::operator new(sizeof(SPRStackArrayConcrete<SPRSmartPtr<ThreadLocalStorageEntry>,1000 >),(char*)&(obj->_entries),1000);
  return obj;
}
void ThreadLocalStorageList::destroy_sappeur_internal(){delete this;}
void* Hashable4::operator new(size_t objectSize,void* place){
   Hashable4* obj=(Hashable4*)place;
   String_16::operator new(sizeof(String_16),(char*)&(obj->_Vorname));
   String_16::operator new(sizeof(String_16),(char*)&(obj->_Ort));
   String_16::operator new(sizeof(String_16),(char*)&(obj->_Nachname));
   String_16::operator new(sizeof(String_16),(char*)&(obj->_Strasse));
  return obj;
}
void Hashable4::destroy_sappeur_internal(){delete this;}
void* AlphabeticSorter::operator new(size_t objectSize,void* place){
   AlphabeticSorter* obj=(AlphabeticSorter*)place;
   SPRStackArrayConcrete<AlphaEntry,36>::operator new(sizeof(SPRStackArrayConcrete<AlphaEntry,36>),(char*)&(obj->_alphabet),36);
  return obj;
}
void AlphabeticSorter::destroy_sappeur_internal(){delete this;}
