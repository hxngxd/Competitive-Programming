var h,g:text;
    a,b,c,d,e,f,n,e1,f1:longint;
function ucln(a,b:longint):longint;
  begin
    if a mod b=0 then ucln:=b
    else ucln:=ucln(b,a mod b);
  end;
{function bcnn(a,b:longint):longint;
var bc:longint;
  begin
      bc:=a*b;
      bcnn:=bc div ucln(a,b);
  end;}
begin
  assign(h,'CONG.INP');reset(h);
  assign(g,'CONG.OUT');rewrite(g);
    readln(h,a,b);readln(h,c,d);
      e:= a*d + b*c;
      f:= b*d;
      n:= ucln(e,f);
      e:= e div n;
      f:= f div n;
    {
      f1:=bcnn(b,d);
        a:=a*(f1 div b);
        c:=c*(f1 div d);
        e1:=a+c;
        n:=ucln(e1,f1);
        e:=e1 div n;
        f:=f1 div n;              }
      write(g,e,' ',f);
  close(h);close(g);
end.
