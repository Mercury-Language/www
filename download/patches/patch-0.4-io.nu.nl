diff -u -r1.44 -r1.45
--- 1.44	1995/09/09 07:47:29
+++ 1.45	1995/09/19 12:46:24
@@ -154,7 +154,8 @@
 		true
 	;
 		write('Mercury Interpreter, version '), 
-		version(VersionString), format("~s", [VersionString]), nl,
+		library__version(VersionString),
+		format("~s", [VersionString]), nl,
 		write('Copyright (C) 1995 University of Melbourne'), nl,
 		write('Underlying Prolog implementation: '),
 		currentOutput(Output), flushOutput(Output),
