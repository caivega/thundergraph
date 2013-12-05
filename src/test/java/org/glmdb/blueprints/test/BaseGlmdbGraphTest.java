package org.glmdb.blueprints.test;

import org.apache.commons.io.FileUtils;
import org.junit.Before;

import java.io.File;
import java.io.IOException;

/**
 * Date: 2013/11/24
 * Time: 11:01 AM
 */
public abstract class BaseGlmdbGraphTest {

    protected File dbPath = null;

    @Before
    public void beforeTests() throws IOException {
        this.dbPath = new File("/tmp/testdb");
        FileUtils.deleteDirectory(this.dbPath);
        this.dbPath.mkdir();
    }

}