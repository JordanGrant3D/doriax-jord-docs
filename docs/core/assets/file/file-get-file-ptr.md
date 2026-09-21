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

## [File](file.md).getFilePtr()

Returns the underlying C `FILE*` handle for interop with C stdio. The CharacterController config script uses it to query the raw descriptor position while `saves/tutorial_slot0.json` is open.

```cpp
virtual FILE * getFilePtr();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-get-file-ptr.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-get-file-ptr.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
