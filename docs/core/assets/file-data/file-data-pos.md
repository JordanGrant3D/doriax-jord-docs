---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
FileData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [FileData](file-data.md).pos()

Returns the current cursor position in bytes from the start of the stream. Pure virtual, implemented by [**File**](../file/file.md) and `Data`. The CharacterController loading bar compares it against `length()` while streaming `saves/tutorial_config.json`.

```cpp
virtual unsigned int pos() = 0;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-pos.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-pos.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
