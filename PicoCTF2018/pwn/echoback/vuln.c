void vuln(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_GS_OFFSET;
  undefined4 local_90 [32];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = 32;
  puVar2 = local_90;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  system("echo input your message:");
  read(0,local_90,127);
  printf((char *)local_90); //substituir este printf por  
  puts("\n");
  puts("Thanks for sending the message!"); //substituir este puts por vuln!
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

