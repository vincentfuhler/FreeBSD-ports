--- dvdisaster.h.orig	2020-06-03 17:37:22 UTC
+++ dvdisaster.h
@@ -425,9 +425,9 @@ typedef struct _CrcBlock
  *** forward declarations
  ***/
 
-struct _RawBuffer *rawbuffer_forward;
-struct _DefectiveSectorHeader *dsh_forward;
-struct _DeviceHandle *dh_forward;
+extern struct _RawBuffer *rawbuffer_forward;
+extern struct _DefectiveSectorHeader *dsh_forward;
+extern struct _DeviceHandle *dh_forward;
 
 /***
  *** bitmap.c
@@ -450,7 +450,7 @@ void FreeBitmap(Bitmap*);
  *** build.h
  ***/
 
-int buildCount;
+extern int buildCount;
 
 /***
  *** cacheprobe.h
