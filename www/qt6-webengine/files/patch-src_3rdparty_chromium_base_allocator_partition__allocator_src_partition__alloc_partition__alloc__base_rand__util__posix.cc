--- src/3rdparty/chromium/base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/rand_util_posix.cc.orig	2024-07-30 11:12:21 UTC
+++ src/3rdparty/chromium/base/allocator/partition_allocator/src/partition_alloc/partition_alloc_base/rand_util_posix.cc
@@ -102,6 +102,10 @@ void RandBytes(void* output, size_t output_length) {
   if (getentropy(output, output_length) == 0) {
     return;
   }
+#elif PA_BUILDFLAG(IS_BSD)
+  if (getentropy(output, output_length) == 0) {
+    return;
+  }
 #endif
   // If getrandom(2) above returned with an error and the /dev/urandom fallback
   // took place on Linux/ChromeOS bots, they would fail with a CHECK in
