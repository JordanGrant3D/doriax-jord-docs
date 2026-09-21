---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
File
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [File](file.md).eof()

Whether the end of the file has been reached. Returns non-zero once a read has hit the end. The CharacterController replay script polls it while draining `replays/tutorial_run0.bin` record by record.

```cpp
virtual int eof();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-eof.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-eof.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
