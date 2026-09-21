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

## [File](file.md).pos()

Returns the current cursor position in bytes from the start of the file. The CharacterController loading bar polls it against `length()` while streaming `saves/tutorial_slot0.json` to report progress.

```cpp
virtual unsigned int pos();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-pos.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-pos.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
