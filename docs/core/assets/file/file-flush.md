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

## [File](file.md).flush()

Flushes buffered data to disk without closing the file. The CharacterController checkpoint script calls it right after writing `saves/tutorial_slot0.json` so progress survives a crash before `close`.

```cpp
void flush();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-flush.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-flush.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
