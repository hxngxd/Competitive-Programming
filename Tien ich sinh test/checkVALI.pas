{$MODE OBJFPC}
{$R-,Q-,S-,I+}
{$OPTIMIZATION LEVEL2}
program IntervalCover;
uses Windows, SysUtils, Math;
const
  prefix = 'VALI';
  InputFile  = prefix + '.INP';
  OutputFile = prefix + '.OUT';
  AnswerFile = prefix + '.ANS';

  MAXN = 100;
var
  dirT, dirC: WideString;
  fi, fo, fa: TextFile;
  n, WEIGHT, i, chiso, sV, sW: integer;
  w: array [1..MAXN] of integer;
  v: array [1..MAXN] of integer;

procedure GenErr(const s: string; const param: array of const);
begin
  raise Exception.CreateFmt(s, param);
end;

procedure ReadDirs;
var
  s: AnsiString;
begin
  ReadLn(s); dirT := Utf8Decode(s);
  ReadLn(s); dirC := Utf8Decode(s);
end;

procedure OpenFiles;
var
  CurrentDir: array[0..Max_Path + 1] of WideChar;
begin
  GetCurrentDirectoryW(Max_Path, CurrentDir);
  SetCurrentDirectoryW(PWideChar(dirT));
  AssignFile(fi, InputFile); Reset(fi);
  AssignFile(fa, AnswerFile); Reset(fa);
  SetCurrentDirectoryW(CurrentDir);
  SetCurrentDirectoryW(PWideChar(dirC));
  AssignFile(fo, OutputFile); Reset(fo);
end;

procedure CloseFiles;
begin
  CloseFile(fi);
  CloseFile(fa);
  CloseFile(fo);
end;

procedure DoCheck;
var
  ketqua, ketquaBGK: integer;
begin

  readln(fi, n, WEIGHT);
  for i:= 1 to n do read(fi, w[i], v[i]);

  readln(fa, ketquaBGK);
  readln(fo, ketqua);

  if ketqua <> ketquaBGK then
        GenErr('Ket qua khong chinh xac', []);

  sW:= 0;
  sV:= 0;

  while not seekeof(fo) do
  begin
        read(fo, chiso);
        sW:= sW + w[chiso];
        sV:= sV + v[chiso];
  end;

  if sV <> ketquaBGK then
        GenErr('Ket qua khong chinh xac', []);

  if sW > WEIGHT then
        GenErr('Ket qua khong chinh xac', []);

  WriteLn('Ket qua hop li!');
  WriteLn('1.0');
end;

begin
  Write(#$EF#$BB#$BF); //Utf-8 BOM
  try
    try
      ReadDirs;
      OpenFiles;
      DoCheck;
    finally
      CloseFiles;
    end;
  except
    on E: Exception do
      begin
        WriteLn(E.Message);
        WriteLn('0.0');
      end;
  end;
end.

