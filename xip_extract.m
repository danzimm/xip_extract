#import <Foundation/Foundation.h>
#import <PackageKit/PKSignedContainer.h>
#import <stdio.h>

void usage(const char *name) {
  printf("usage: %s [file.xip]\n", name);
}

int main(int argc, const char *argv[]) {
  if (argc != 2) {
    usage(argv[0]);
    return 1;
  }
  
  NSError *error = nil;
  PKSignedContainer *cont = [[PKSignedContainer alloc] initForReadingFromContainerAtURL:[NSURL fileURLWithPath:@(argv[1])] error:&error];
  if (error || !cont) {
    printf("Failed to open!!! %s\n", error.description.UTF8String);
    return 1;
  }
  printf("Opened container %s\n", cont.description.UTF8String);
  [cont startUnarchivingAtPath:@"./"
                 notifyOnQueue:dispatch_get_main_queue()
                      progress:^(double progress, NSString *progressText) {
                        printf("[Prog] %f: %s\n", progress, progressText.description.UTF8String); }       
                        finish:^(BOOL flag) {
                                 printf("[Fin] %s\n", flag ? "true" : "false"); }];
  dispatch_main();
  [cont release];
  return 0;
}

