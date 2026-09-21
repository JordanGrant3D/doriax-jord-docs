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

## [FileData](file-data.md).eof()

Whether the end of the stream has been reached. Pure virtual, implemented by [**File**](../file/file.md) and `Data`. The CharacterController tutorial drains `saves/tutorial_config.json` in a loop guarded by it.

```cpp
virtual int eof() = 0;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-eof.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-eof.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
