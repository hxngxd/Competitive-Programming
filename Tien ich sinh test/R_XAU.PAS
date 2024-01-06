// Chuong trinh Tao cac file Input cua Ban giam khao
{$MODE OBJFPC}
program RandomTest;
const
  Prefix = 'XAU.INP';
  MAX = 25;

var xau_az_09: string;
    ch: char;
    len: integer;

procedure GenTest(const FName: string);
var
  f: Text;
  i, k, l: integer;
  xau, temp: string;

begin
  Randomize;
  Assign(f, FName); rewrite(f);
  try

    //N := Random(MAX) + 1;
    xau:= '';

    for k:= 1 to MAX do
    begin
        temp:= '';
        for i:= 1 to random(5) + 1 do
            temp:= temp + xau_az_09[random(len)+1];
        l:= length(temp);
        if l mod 2 = 0 then
        begin
                for i:= l downto 1 do temp:= temp + temp[i];
        end
           else
           begin
                for i:= l-1 downto 1 do temp:= temp + temp[i];
           end;
        xau:= xau + temp;
    end;

    writeln(f, xau);

  finally
    close(f);
  end;
end;

procedure Gen09_AZ;
var
  c: Char;
begin
  for c := '1' to '1' do
    GenTest(Prefix);
end;

begin
  xau_az_09:= '';
  for ch:= 'a' to 'z' do xau_az_09:= xau_az_09 + ch;
  for ch:= '0' to '9' do xau_az_09:= xau_az_09 + ch;
  len:= length(xau_az_09);

  Gen09_AZ;
end.
