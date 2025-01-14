import XCTest
import SwiftTreeSitter
import TreeSittergabc

final class TreeSittergabcTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_gabc())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading gabc grammar")
    }
}
