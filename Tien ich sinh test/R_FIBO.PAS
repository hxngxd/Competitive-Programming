// Chuong trinh Tao cac file Input cua Ban giam khao
{$MODE OBJFPC}
program RandomTest;
const
  Prefix = 'FIBO.INP';

procedure GenTest(const FName: string);
var
  f: Text;

begin
  Randomize;
  Assign(f, FName); rewrite(f);
  try

    write(f, 1 + random(9));

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
  Gen09_AZ;
end.
