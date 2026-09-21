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

## [File](file.md).~File()

Destructor. Closes the file handle when one is still open. The CharacterController save script relies on it to release `saves/tutorial_slot0.json` when a heap-allocated writer goes out of scope.

```cpp
virtual ~File();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-destructor.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-destructor.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
