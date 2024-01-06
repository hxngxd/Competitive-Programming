VAR  f,g:text;
     s,st:string;
     i:integer;
function ktdx(s:string):boolean;
  var i:integer;
 begin
  ktdx:=true;
  for i:=1 to length(s) div 2 do
   if s[i]<>s[length(s)-i+1] then
      begin
            ktdx:=false;
            break;
      end;
 end;
BEGIN
  assign(f,'XAU.INP');reset(f);
  assign(g,'XAU.OUT');rewrite(g);
  read(f,s);
  while( length(s) > 0) do
        begin
         for i:= 1 to length(s) do
         if ktdx(copy(s,1,i)) then st:= copy(s,1,i);
         writeln(g,st) ;
         delete(s,1,length(st));
        end;
close(f);close(g);
END.
