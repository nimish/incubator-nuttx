      /* Yes, close the stream */
      if (stream)
          fclose(stream);
      /* And attempt to reopen the file at the provided path */
      return fopen(path, mode);