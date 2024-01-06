// Chuong trinh Tao cac file Input cua Ban giam khao
{$MODE OBJFPC}
program RandomTest;
const
  Prefix = 'CONG.INP';

procedure GenTest(const FName: String);
var
  f: Text;
  A, B, C, D: Integer;
begin
  Randomize;
  assign(f, FName); rewrite(f);
  try
    A := Random(10000) + 1;
    B := Random(10000) + 1;
    C := Random(10000) + 1;
    D := Random(10000) + 1;
    WriteLn(f, A, '   ', B);
    WriteLn(f, C, '   ', D);
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
